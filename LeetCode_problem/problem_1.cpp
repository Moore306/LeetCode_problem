#include"problem.h"
vector<int> twoSum(vector<int>& nums, int target);
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> results;
	int firstnum;
	vector<int>::iterator index;;
	for (int i = 0; i<nums.size() - 1; i++)
	{
		firstnum = nums[i];
		//index=find(nums.begin()+i+1,nums.end(),target-firstnum);
		/*if(index!=nums.end())
		cout<<i<<"  huhsahhuish"<<endl;
		if(find(nums.begin()+i+1,nums.end(),target-firstnum)!=nums.end())
		cout<<i<<"  huhsahhuish"<<endl;*/
		//cout<<index-nums.begin()<<endl;
		//cout<<nums.end()-nums.begin()<<endl;
		if (find(nums.begin() + i + 1, nums.end(), target - firstnum) != nums.end())
		{
			results.push_back(i);
			results.push_back(find(nums.begin(), nums.end(), target - firstnum) - nums.begin());
			//break;
		}

	}

	return results;

}
int problem_1()
{
	vector <int> nums;
	//	vector<int> nums£»
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);
	vector<int>  results;
	results = twoSum(nums, 6);
	for (int i = 0; i<nums.size(); i++)
		cout << nums[i] << "  ";
	cout << endl;
	for (int i = 0; i<results.size(); i++)
		cout << results[i] << "  ";

	int bb = 7.5 / 2;
	cout << bb << endl;
	system("pause");
	return 0;
}