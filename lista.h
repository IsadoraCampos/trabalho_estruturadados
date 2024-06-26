#ifndef LISTA_H
#define LISTA_H

struct node {
    int id;
    char descricao[30];
    int tempo;
    char situacao[20];
    struct lista *next;
};

typedef struct node Node;

Node* criarNo(int id, char* descricao, int tempo, char* situacao);
Node* insertTree(Node* node, Node* newNode);
Node* ordTempo(Node *node, Node* newNode);
void visualizar(Node *root, int n);
int concluir(Node *root, int n);
int atualizaRoot1(Node *root,Node *root1,int n);

#endif
