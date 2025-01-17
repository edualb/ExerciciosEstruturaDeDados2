// rubro-negra_p.h

/*  
typedef struct node {
    int value;
    char color; // 1-> RED, B-> BLACK
    Node* right;
    Node* left;
    Node* father;
} Node;
*/
typedef struct node Node;

// Get a color from a node
int getColor(Node *node);

// Check if is necessary change the coloe
int isChangeColor(Node *node);

// Change color node
void changeColor(Node *node);

// check if rotation is to right
int isRotationRight(Node *node);

// check if rotation is to right
int isRotationLeft(Node *node);

// Rotation double to right
int isRotationDoubleRight(Node *node);

// Rotation double to left
int isRotationDoubleLeft(Node *node);

// Rotation to right
Node *rotationRight(Node *node);

// Rotation to left
Node *rotationLeft(Node *node);

// Responsable to balance the tree
Node *balance(Node *root);

// Responsable to print All nodes of the tree.
void printAll(Node *node);

// Responsable to insert a new node.
Node *insert(Node* root, Node *father, Node* node);

// Responsable to create a new node.
Node *create(int value);

// Search a value through red-black tree
Node *search(Node* node, int value);

// Remove a value through red-black tree
Node *removeNode(Node* root, int value);

Node *getFarther(Node *node);