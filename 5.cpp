//��Ŀ��ַ
//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1
//��Ŀ����
//��1 + 2 + 3 + ... + n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
class Solution {
public:
	int Sum_Solution(int n) {
		int sum = 0;
		(n != 0) && (sum = n + Sum_Solution(n - 1));
		return sum;
	}
};