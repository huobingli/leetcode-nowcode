//��Ŀ��ַ
//https://www.nowcoder.com/practice/3194a4f4cf814f63919d0790578d51f3
//��Ŀ����
//ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�ͬ��Cat��Fishд�������ĸ���Ȥ��
//��һ������Fish������������ȴ������������˼�����磬��student.a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
//��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
class Solution {
public:
	string ReverseSentence(string str) {
		string strrt;
		int i = 0, nstart = 0;
		if (str.length() == 0) return str;
		for (; i < str.length(); i++)
		{
			if (str.at(i) == ' ')
			{
				strrt = ' ' + str.substr(nstart, i - nstart) + strrt;
				nstart = i + 1;
			}
		}
		strrt = str.substr(nstart) + strrt;

		return strrt;
	}
};
