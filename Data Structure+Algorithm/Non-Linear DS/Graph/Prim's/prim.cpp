#include <vector>
#include <queue>
#include <iostream>
#include <cassert>

typedef std::pair<int, int> ii;
typedef std::vector<int> vi;
typedef std::vector<ii> vii;

typedef std::priority_queue<ii> pqii;

typedef std::vector<vii> graph;



void __prim_process_node(int node_index, graph g, vi* vis, pqii* pq_ptr) {
  vi& visited = *(vis);
  visited[node_index] = 1;

  vii g_row = g[node_index];

  for(int i = 0; i < g_row.size(); i++) {
    if(visited[g_row[i].first]) continue;

    pq_ptr->push(
        ii(-g_row[i].second, -g_row[i].first)
        );
  }
}

int prim(graph g) {
  vi visited;
  pqii pq;


  visited.assign(g.size(), 0);

  // start with node 0
  int curr_node = 0;
  __prim_process_node(curr_node, g, &visited, &pq);

  int mst_cost = 0;


  while(!pq.empty()) {
    ii pq_front = pq.top();
    pq.pop();

    int label = -pq_front.second;
    int weight = -pq_front.first;


    if(visited[label]) continue;

    mst_cost += weight;

    __prim_process_node(label, g, &visited, &pq);
  }

  return mst_cost;
}

int main() {
  graph sample_graph({
      vii({
        ii(1, 67),
        ii(2, 46)
        }),
      vii({
        ii(0, 67),
        ii(2, 75)
        }),
      vii({
        ii(0, 67),
        ii(1, 75)
        })
      });

  int expected_answer = 113;


  int answer = prim(sample_graph);

  std::cout << answer << std::endl;

  assert(answer == expected_answer);

  return 0;
}
