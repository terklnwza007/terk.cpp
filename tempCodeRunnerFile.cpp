
    int shot =0;
    int max_height=0;
    for(int i=0; i<block.size(); i++){
        if(block[i].first>max_height){
            max_height = block[i].second;
            shot++;
        }
    }
    cout << shot;
}
    