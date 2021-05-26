#include <iostream>
#include <string>
#include <queue>
using namespace std;
namespace ariel
{
    template <typename T>
    class BinaryTree
    {
    private:
        struct Node
        {
            T value;
            Node *left;
            Node *right;
            Node *parent;
            explicit Node(T val = 0, Node *l = nullptr, Node *r = nullptr, Node *p = nullptr) : value(val), left(l), right(r), parent(p){};

            friend ostream &operator<<(ostream &out, const Node &n) { return out; }
        };
        Node *root;

    public:
        BinaryTree<T>(){};
        ~BinaryTree<T>(){};

        class pre_iterator
        {
        private:
            Node *current;
            std::queue<Node> q;
            void preorder(Node *n)
            {
            }

        public:
            explicit pre_iterator(Node *pTree = nullptr) : current(pTree)
            {
                if (current != nullptr)
                {
                }
            }
            pre_iterator &operator++()
            {
                return *this;
            }
            pre_iterator &operator++(int)
            {
                return *this;
            }
            bool operator==(const pre_iterator &other) const
            {
                return false;
            }
            bool operator!=(const pre_iterator &other) const
            {
                return false;
            }
            T &operator*() const
            {
                return this->current->value;
            }

            T *operator->() const
            {
                return &(this->current->value);
            }

            friend ostream &operator<<(ostream &out, const pre_iterator &num)
            {
                return out;
            }
        };
        class in_iterator
        {
        private:
            Node *current;
            std::queue<Node> q;
            void inorder(Node *n)
            {
            }

        public:
            explicit in_iterator(Node *pTree = nullptr) : current(pTree)
            {
                if (current != nullptr)
                {
                }
            }
            in_iterator &operator++()
            {
                return *this;
            }
            in_iterator &operator++(int)
            {
                return *this;
            }
            bool operator==(const in_iterator &other) const
            {
                return false;
            }
            bool operator!=(const in_iterator &other) const
            {
                return false;
            }
            T &operator*() const
            {
                return this->current->value;
            }

            T *operator->() const
            {
                return &(this->current->value);
            }

            friend ostream &operator<<(ostream &out, const in_iterator &num)
            {
                return out;
            }
        };
        class post_iterator
        {
        private:
            Node *current;
            std::queue<Node> q;
            void postorder(Node *n)
            {
            }

        public:
            explicit post_iterator(Node *pTree = nullptr) : current(pTree)
            {
                if (current != nullptr)
                {
                }
            }
            post_iterator &operator++()
            {
                return *this;
            }
            post_iterator &operator++(int)
            {
                return *this;
            }
            bool operator==(const post_iterator &other) const
            {
                return false;
            }
            bool operator!=(const post_iterator &other) const
            {
                return false;
            }
            T &operator*() const
            {
                return this->current->value;
            }

            T *operator->() const
            {
                return &(this->current->value);
            }

            friend ostream &operator<<(ostream &out, const post_iterator &num)
            {
                return out;
            }
        };

        Node* get_root(){
            return this->root;
        }

        BinaryTree<T> &add_root(T root)
        {
            return *this;
        }
        BinaryTree<T> &add_left(T father, T l)
        {
            return *this;
        }
        BinaryTree<T> &add_right(T father, T r)
        {
            return *this;
        }

        BinaryTree<T>::in_iterator begin()
        {
            return begin_inorder();
        }
        BinaryTree<T>::in_iterator end()
        {
            return end_inorder();
        }
        BinaryTree<T>::pre_iterator begin_preorder()
        {
            return pre_iterator(root);
        }
        BinaryTree<T>::pre_iterator end_preorder()
        {
            return pre_iterator();
        }
        BinaryTree<T>::in_iterator begin_inorder()
        {
            return in_iterator(root);
        }
        BinaryTree<T>::in_iterator end_inorder()
        {
            return in_iterator();
        }
        BinaryTree<T>::post_iterator begin_postorder()
        {
            return post_iterator(root);
        }
        BinaryTree<T>::post_iterator end_postorder()
        {
            return post_iterator();
        }

        friend ostream &operator<<(ostream &out, const BinaryTree<T> &num)
        {
            return out;
        }
    };
}