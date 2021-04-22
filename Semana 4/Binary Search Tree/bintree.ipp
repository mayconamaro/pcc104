template <std::totally_ordered T>
class BinaryTree {

struct Node {

    T value;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;

    Node(T v) : value{v} {}
};

public:
    BinaryTree() {}

    InsertionInfo insert(T v) {
        return insert_p(v, root);
    }

    SearchInfo search(T v){
        return search_p(v, root);
    }

    std::string show() {
        return show_p(root);
    }

private:
    std::unique_ptr<Node> root;

    InsertionInfo insert_p(T v, std::unique_ptr<Node>& r) {
        
        if (!r) {
            r = std::make_unique<Node>(v);
            return InsertionInfo::NewInserted;
        }

        if (v == r->value)
            return InsertionInfo::AlreadyIn;

        return (v < r->value) ? insert_p(v, r->left) : insert_p(v, r->right);
    }

    SearchInfo search_p(T v, std::unique_ptr<Node>& r) {
        
        if (!r) 
            return SearchInfo::NotFound;
        

        if (v == r->value)
            return SearchInfo::Found;

        return (v < r->value) ? search_p(v, r->left) : search_p(v, r->right);
    }

    std::string show_p(std::unique_ptr<Node>& r) {
        
        if (!r) return "";
       
        std::stringstream ss;
        ss << show_p(r->left) << r->value << " " << show_p(r->right);

        return ss.str();
    }
};