template <typename T>
class BinaryTree {

struct Node {

    T value;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;

    Node(T v) : value{v} {}
};

public:
    std::unique_ptr<Node> root;

    BinaryTree() {}

    InsertionInfo insertIn(T v, std::unique_ptr<Node>& r) {
        
        if (!r) {
            r = std::make_unique<Node>(v);
            return InsertionInfo::Success;
        } else {
            return InsertionInfo::NodeNotEmpty;
        }
            
    }

    std::vector<T> preorder(){
        std::vector<T> resp;
        preorder_p(root, resp);
        return resp;
    }

    std::vector<T> postorder(){
        std::vector<T> resp;
        postorder_p(root, resp);
        return resp;
    }

    std::vector<T> inorder(){
        std::vector<T> resp;
        inorder_p(root, resp);
        return resp;
    }

    int height(){
        return height_p(root);
    }

private:
    
    void preorder_p(std::unique_ptr<Node> &r, std::vector<T> &v){
        
        if(r){
            v.push_back(r->value);
            preorder_p(r->left, v);
            preorder_p(r->right, v);
        }
    }

    void postorder_p(std::unique_ptr<Node> &r, std::vector<T> &v){
        if(r){
            postorder_p(r->left, v);
            postorder_p(r->right, v);
            v.push_back(r->value);
        }
    }

    void inorder_p(std::unique_ptr<Node> &r, std::vector<T> &v){
        if(r){
            inorder_p(r->left, v);
            v.push_back(r->value);
            inorder_p(r->right, v);
        }
    }

    int height_p(std::unique_ptr<Node> &r){
        
        if(!r){
            return 0;
        } else {
            return 1 + std::max(height_p(r->left), height_p(r->right));
        }
    }
};