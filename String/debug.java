// This is solution written by Neeraj Anand for July challenge on codechef
// This is solution written by Neeraj Anand for July challenge on codechef
// This is solution written by Neeraj Anand for July challenge on codechef
// This is solution written by Neeraj Anand for July challenge on codechef


import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
 public static void main (String[] args) throws java.lang.Exception {
 
  Scanner sc = new Scanner(System.in);
 
  int T = sc.nextInt();
 
  while(T-- > 0) {
   int N = sc.nextInt();
   Map<Integer, Set<Integer>> tree = new HashMap<>();
   for(int i = 1; i < N; i++) addPath(tree, sc.nextInt(), sc.nextInt());
 
            int[] level_array = new int[N+1];
            int[] parent_array = new int[N+1];
   preProcess(tree, level_array, parent_array);
 
   int Q = sc.nextInt();
   int[] visited = new int[N+1];
   for(int i = 1; i <= Q; i++) {
    int K = sc.nextInt();
    int[] query = new int[K];
    int maxDepth = 0;
    int nodeWithMaxDepth = -1;
    for(int j = 0; j < K; j++) {
     query[j] = sc.nextInt();
     if(level_array[query[j]] > maxDepth) {
      maxDepth = level_array[query[j]];
      nodeWithMaxDepth = query[j];
     }
    }
 
    boolean hasPath = process(nodeWithMaxDepth, parent_array, level_array, query, visited, i);
    System.out.println(hasPath ? "YES" : "NO");
   }
  }
 
  sc.close();
 }
 
 private static boolean process(int nodeWithMaxDepth, int[] parent_array, int[] level_array, int[] query, int[] visited, int marker) {
  visitTillParent(nodeWithMaxDepth, parent_array, visited, marker);
  int maxDepth = 0;
  nodeWithMaxDepth = -1;
  for(int q : query) {
   if(visited[q] != marker && level_array[q] > maxDepth) {
    maxDepth = level_array[q];
    nodeWithMaxDepth = q;
   }
  }
 
  if(nodeWithMaxDepth == -1) return true;
 
  while(visited[nodeWithMaxDepth] != marker) {
   visited[nodeWithMaxDepth] = marker;
   nodeWithMaxDepth = parent_array[nodeWithMaxDepth];
  }
 
  for(int q : query) {
   if(visited[q] != marker || level_array[q] < level_array[nodeWithMaxDepth]) return false;
  }
  return true;
 }
 
 private static void visitTillParent(int nodeWithMaxDepth, int[] parent_array, int[] visited, int marker) {
  visited[nodeWithMaxDepth] = marker;
  while(parent_array[nodeWithMaxDepth] != -1) {
   nodeWithMaxDepth = parent_array[nodeWithMaxDepth];
   visited[nodeWithMaxDepth] = marker;
  }
 }
 
 private static void preProcess(Map<Integer, Set<Integer>> tree, int[] level_array, int[] parent_array) {
  boolean[] visited = new boolean[level_array.length];
  Queue<Integer> bfsQueue = new LinkedList<>();
 
        int u = 1;
  parent_array[u] = -1;
  level_array[u] = 0;
  bfsQueue.add(u);
  visited[u] = true;
 
  while(!bfsQueue.isEmpty()) {
   int n = bfsQueue.size();
   while(n-- > 0) {
    int parentNode = bfsQueue.poll();
    Set<Integer> children = tree.get(parentNode);
    for(Integer child : children) {
     if(!visited[child]) {
      parent_array[child] = parentNode;
      level_array[child] = level_array[parentNode]+1;
      visited[child] = true;
      bfsQueue.add(child);
     }
    }
   }
  }
 }
 
 private static void addPath(Map<Integer, Set<Integer>> tree, Integer u, Integer v) {
  addEdge(tree, u, v);
  addEdge(tree, v, u);
 }
 
 private static void addEdge(Map<Integer, Set<Integer>> tree, Integer u, Integer v) {
  if(!tree.containsKey(u)) tree.put(u, new HashSet<>());
  tree.get(u).add(v);
 }
}