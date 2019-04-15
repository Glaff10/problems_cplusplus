#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 10100

// declaro as vari�veis que vou usar
int n, m, h, geracao[MAXN], qtd[MAXN], presenca[MAXN];

// declaro a lista de adjac�ncia que representar� o grafo
vector<int> lista[MAXN];

// DFS que usarei para percorrer o grafo
void dfs(int v=0, int l=0){ // ela recebe o v�rtice e o n�vel em que estou

	geracao[v]=l; // salva que a gera��o do v�rtice � o n�vel
	qtd[l]++; // e aumenta em uma unidade a quantidade de descendentes nessa gera��o

	h=max(h, l); // se "l" superar a altura da �rvore, ent�o ele � a altura

	// para cada um dos filhos de v
	for(int i=0; i<lista[v].size(); i++)
		dfs(lista[v][i], l+1); // chamarei a DFS para ele, agora um n�vel abaixo
}

int main(){

	scanf(" %d %d", &n, &m); // leio os valores de "n" e "m"

	for(int i=1; i<=n; i++){ // para cada um dos descendentes

		// declaro e leio quem � seu pai
		int p;
		scanf(" %d", &p);

		// e depois o adiciono ao grafo como filho de seu pai
		lista[p].push_back(i);
	}

	// chamo a DFS para marcar a gera��o de cada descendente
	// bem como a quantidade de descendentes em cada gera��o
	dfs();

	// para cada convidado que compareceu � festa
	for(int i=1; i<=m; i++){

		// declaro e leio seu n�mero
		int part;
		scanf(" %d", &part);

		// e adiciono uma unidade � presen�a de sua gera��o
		presenca[geracao[part]]++;
	}

	// depois, para cada gera��o, imprio o percentual de presen�a
	for(int i=1; i<=h; i++)
		// que ser� 100.00 vezes o quociente entre quantos convidados vieram
		// e quantos descendentes comp�em cada gera��o
		printf("%.2lf ", 100.0*presenca[i]/qtd[i]);

	// por fim, imprimo a quebra de linha
	printf("\n");

	return 0;
}
