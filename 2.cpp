//��Ŀ��ַ
//https://www.nowcoder.com/practice/12d959b108cb42b1ab72cef4d36af5ec
//��Ŀ����
//�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵����񣬾������ַ���ģ�����ָ�����������
//����һ���������ַ�����S���������ѭ������Kλ���������������磬�ַ�����S = ��abcXYZdef��, Ҫ�����ѭ��
//����3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����

class Solution {
public:
	string LeftRotateString(string str, int n) {
		if (str.length() == 0) return str;
		if (n == 0) return str;
		n = n % str.length();
		return str.substr(n) + str.substr(0, n);
	}
};