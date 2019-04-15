#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 10100

// declaro as variáveis que vou usar
int n, m, h, geracao[MAXN], qtd[MAXN], presenca[MAXN];

// declaro a lista de adjacência que representará o grafo
vector<int> lista[MAXN];

// DFS que usarei para percorrer o grafo
void dfs(int v=0, int l=0){ // ela recebe o vértice e o nível em que estou

	geracao[v]=l; // salva que a geração do vértice é o nível
	qtd[l]++; // e aumenta em uma unidade a quantidade de descendentes nessa geração

	h=max(h, l); // se "l" superar a altura da árvore, então ele é a altura

	// para cada um dos filhos de v
	for(int i=0; i<lista[v].size(); i++)
		dfs(lista[v][i], l+1); // chamarei a DFS para ele, agora um nível abaixo
}

int main(){

	scanf(" %d %d", &n, &m); // leio os valores de "n" e "m"

	for(int i=1; i<=n; i++){ // para cada um dos descendentes

		// declaro e leio quem é seu pai
		int p;
		scanf(" %d", &p);

		// e depois o adiciono ao grafo como filho de seu pai
		lista[p].push_back(i);
	}

	// chamo a DFS para marcar a geração de cada descendente
	// bem como a quantidade de descendentes em cada geração
	dfs();

	// para cada convidado que compareceu à festa
	for(int i=1; i<=m; i++){

		// declaro e leio seu número
		int part;
		scanf(" %d", &part);

		// e adiciono uma unidade à presença de sua geração
		presenca[geracao[part]]++;
	}

	// depois, para cada geração, imprio o percentual de presença
	for(int i=1; i<=h; i++)
		// que será 100.00 vezes o quociente entre quantos convidados vieram
		// e quantos descendentes compõem cada geração
		printf("%.2lf ", 100.0*presenca[i]/qtd[i]);

	// por fim, imprimo a quebra de linha
	printf("\n");

	return 0;
}
