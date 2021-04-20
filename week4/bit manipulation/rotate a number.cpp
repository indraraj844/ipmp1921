vector <int> rotate (int n, int d)
        {
            //code here.
            return (n>>d)|(n<<(16-d));
        }
