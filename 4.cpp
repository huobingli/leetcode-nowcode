//��Ŀ��ַ
//https://www.nowcoder.com/practice/762836f4d43d43ca9deb273b3de8e1f4
//��Ŀ����
//LL���������ر��, ��Ϊ��ȥ����һ���˿���, ���������Ȼ��2������, 2��С��(һ����ԭ����54��^_^)...
//��������г����5����, �����Լ�������, �����ܲ��ܳ鵽˳��, ����鵽�Ļ�, ������ȥ��������Ʊ, �ٺ٣���
//������A, ����3, С��, ����, ��Ƭ5��, ��Oh My God!������˳��.....LL��������, ��������, ������\С �����Կ����κ�����, 
//����A����1, JΪ11, QΪ12, KΪ13�������5���ƾͿ��Ա�ɡ�1, 2, 3, 4, 5��(��С���ֱ���2��4), ��So Lucky!����LL����ȥ��������Ʊ���� 
//����, Ҫ����ʹ�������ģ������Ĺ���, Ȼ���������LL��������Σ� ����������˳�Ӿ����true����������false��
//Ϊ�˷������, �������Ϊ��С����0��

class Solution {
public:
	bool IsContinuous(vector<int> numbers) {
		int nMax = 0, nMin = 0;
		int nZero = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == 0)
			{
				nZero++;
				continue;
			}
			if (nMin == 0 || nMin > numbers[i]) nMin = numbers[i];
			if (nMax == 0 || nMax < numbers[i]) nMax = numbers[i];
		}

		if ((nMax - nMin < 5 && nMax - nMin > 0) || (nMax == nMin && nZero == 4))
			return true;

		return false;
	}
};