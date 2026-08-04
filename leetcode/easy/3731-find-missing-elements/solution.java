class Solution {

    public List<Integer> findMissingElements(int[] nums) {

        List<Integer> ans = new ArrayList<>();

        int mannu = nums[0];
        int mixu = nums[0];

        for(int i=1;i<nums.length;i++){

            if(nums[i]<mannu)
                mannu=nums[i];

            if(nums[i]>mixu)
                mixu=nums[i];
        }

        for(int num=mannu;num<=mixu;num++){

            boolean found=false;

            for(int j=0;j<nums.length;j++){

                if(nums[j]==num){

                    found=true;
                    break;
                }
            }

            if(!found)
                ans.add(num);
        }

        return ans;
    }
}