
    #include<iostream>
    using namespace std;

    struct node {

    int data;
    node* left;
    node* right;

    };

// Declare root as a global variable
    struct node* root = NULL;

// Insert function to modify the global root
    void Insert(int x) {

    struct node* temp = new node();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;

    // If the tree is empty, set the new node as the root
    if (root == NULL) {
        root = temp;
        return;
    }

    // Traverse the tree to find the correct position
    struct node* current = root;

    struct node* curr2 = NULL;

    while (current != NULL) {
        curr2 = current;
        if (x <= current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    // Insert the new node in the correct position
    if (x <= curr2->data) {
        curr2->left = temp;
    } else {
        curr2->right = temp;
    }
}




    void Max(){

    struct node* curr = root;

    while(curr->right!=NULL){

        curr=curr->right;
    }

    cout<<"Maximum Number is = "<<curr->data<<endl;
}

// In-order traversal to print the binary search tree
    void PrintInOrder( ) {

    struct node* curr =root;

    cout<<"Sorted elements "<<endl;

    if (root == NULL) return;

    while( curr->left!=NULL){

        curr=curr->left;

        cout<<curr->data<<" ";
    }

     cout<<root->data<< " ";

    while(curr->right!=NULL){

        curr=curr->right;
        cout<<curr->data<<" ";
    }

    }

    int main() {

    int numElements, value;

    // Ask the user for the number of elements to insert
    cout << "Enter the number of elements to insert: ";

    cin >> numElements;

    // Loop to insert user-input values into the tree
    for (int i = 0; i < numElements; i++) {

        cout << "Enter value " << i + 1 << ": ";

        cin >> value;

        Insert(value);
    }

    // Print the tree in in-order traversal

    cout << "In-order traversal of the binary search tree: ";

    PrintInOrder( );

    cout << endl;

    Min();

    Max();.

    return 0;
}

