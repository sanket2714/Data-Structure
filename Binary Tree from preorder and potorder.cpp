struct node* constructUtil(int pre[], int post[], int &preindex,int l, int h,int size){
	if(l>h || *preindex >= size){
		return NULL;
	}
	struct node* root = newNode(pre[*preindex]);
	++*preindex;
	
	if(l == h){
		return root;
	}

	int i;
	for(i=l;i<=h;i++){
		if(pre[*preindex] == post[i])
			break;
	}
	
	if(i<=h){
		
		root->left = costructUtil(pre,post,preindex,l,i,size);
		root->right = costructUtil(pre,post,preindex,i+1,h,size);
	}

	return root;
}


struct node *constructTree (int pre[], int post[], int size) 
{
	int preindex=0;
	return constructUtil(pre,post,preindex,0,size-1,size); 
}
