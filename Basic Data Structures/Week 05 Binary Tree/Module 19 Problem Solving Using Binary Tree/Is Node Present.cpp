

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    queue<BinaryTreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();
        if (f->data == x)
        {
            return true;
        }
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return false;
}