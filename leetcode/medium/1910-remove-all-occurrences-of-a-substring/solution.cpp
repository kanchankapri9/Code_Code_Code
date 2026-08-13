// let's start a fresh 
// we can make a windows that has same size as the part
// we move it though s and if window matches we will remove it. 


// here's a catch
// -evrytime when we delete the s has new attached or new indexes beacuse some of the elements has left , we removerd them

// how we will handle them?

// ?? we should be htingiking about it 



// this is the same exaple of it -


// Note that a new occurrence of pattern can appear if you remove an old one, For example, s = "ababcc" and pattern = "abc".


// maaybe after every deletion we have to check it from index 0
// like if something has removed( the one window has matched and removed )
// we will check s from start



class Solution {
    public : 
    // the function
    string removeOccurrences(string s, string part){
        // sure about , it checks for the lentgh pf part
        // slength - partlength will give a number from there , 3 character or whatever the part length is there will be elements exactly size of part possible for window to move till then 
        // 12 - 6 = 6

        for(int i = 0; i <= (int)s.length() - (int)part.length(); i++) {
            // window
             string window = s.substr(i, part.length());

             // check

             if( window == part) {
                s.erase(i, part.length());

                i = -1;
             }
        }

             return s ;
        }


};






