#社交关系网络图的绘制
import matplotlib.pyplot as plt
import networkx as nx
plt.rcParams['font.sans-serif'] = ['SimHei']
G = nx.Graph()
lst = [['王业强','杨佳玉晗',0.8],['王业强','丁妙染',0.8],['王业强','Timi',0.9],['王业强','王文翼',0.9],['王文翼','Timi',0.8],['王者荣耀','杨佳玉晗',0.7],['王业强','王者荣耀',0.7]]

for ii in lst:
    G.add_edge(ii[0],ii[1],weight = ii [2])

elarge = [(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] > 0.5]
esmall = [(u,v) for (u,v,d) in G.edges(data=True) if d['weight'] <= 0.5]

pos = nx.spring_layout(G)
nx.draw_networkx_nodes(G,pos,node_size = 1500)

nx.draw_networkx_edges(G,pos,edgelist=elarge,width=3,edge_color='g')
nx.draw_networkx_edges(G,pos,edgelist=esmall,width=1,edge_color='g')

nx.draw_networkx_labels(G,pos,font_size = 18)

plt.axos('off')

plt.title("王业强的社交网络图")

plt.show()
