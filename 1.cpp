//��Ŀ��ַ 
//https://www.nowcoder.com/practice/390da4f7a00f44bea7c2f3d19491311b
//��Ŀ����
//����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
//������� :
//��Ӧÿ�����԰����������������С���������

class Solution {
public:
	vector<int> FindNumbersWithSum(vector<int> array, int sum) {
		vector<int> vcrt;
		map<int, int> mp;
		int tmp = 0;
		for (int i = 0; i < array.size(); i++)
		{
			tmp = sum - array[i];
			auto iter = std::find(array.begin(), array.end(), tmp);
			if (iter != array.end())
			{
				mp.insert(make_pair(array[i], tmp));
			}
		}

		int mu = 0, nmin = 0, nmax = 0;
		auto itmp = mp.begin();
		for (; itmp != mp.end(); itmp++)
		{
			tmp = itmp->first * itmp->second;
			if (mu == 0)
			{
				mu = tmp;
				if (itmp->first > itmp->second)
				{
					nmin = itmp->second;
					nmax = itmp->first;
				}
				else
				{
					nmin = itmp->first;
					nmax = itmp->second;
				}
			}
			else
			{
				if (tmp < mu)
				{
					mu = tmp;
					if (itmp->first > itmp->second)
					{
						nmin = itmp->second;
						nmax = itmp->first;
					}
					else
					{
						nmin = itmp->first;
						nmax = itmp->second;
					}
				}
			}
		}

		if (nmin != 0 && nmax != 0)
		{
			vcrt.push_back(nmin);
			vcrt.push_back(nmax);
		}
		return vcrt;
	}
};