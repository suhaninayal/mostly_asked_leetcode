
void mark_parent(node* root,unordered_map<node*,node*> &parent_track,node* target)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* current=q.front();
        q.pop();

        if(current->left)
        {
            parent_track[current->left]=current;
            q.push(current->left);
        }
        if(current->right)
        {
            parent_track[current->right]=current;
            q.push(current->right);
        }
    }
}
