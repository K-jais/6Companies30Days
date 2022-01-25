int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int out=0;
        for (int i=0; i<points.size(); i++) {
            unordered_map<int,int> map;
            for (int j=0; j<points.size(); j++) {
                int xdist = points[i].first-points[j].first;
                int ydist = points[i].second-points[j].second;
                out+=(map[(xdist*xdist+ydist*ydist)]++)*2;
            }
        }
        return out;
    }
