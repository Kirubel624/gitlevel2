void sum()
   {

    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout<< "Enter number "<<i<<":\n\n" ;
        cin>>n;
        sum+=n;
    }
    cout<<"sum is: "<< sum<<endl<<endl;

    }
