�}`6  2   4>>���RM����D1��S^S]j������?΀�����`����xx��SW���1���N�뱁��{���?I}�:gkA�W7
�:`v��'E˾c_�Hc�Eq0��-�Ng��l��3L*I�;�}9gD_�\�3�b"X=�&�Fa�A�&}�uW�˷ۋ�Dl�w���EQSlh�GY�G=��&r30QA�T�`y��pݮ�ѷ��~�C�ۜng���i�������
F[Ҭ]o] ��7)�j��X� N�;�/�/�B4�sg�T�4<�����箮�L,v��w��Q���8ޥ{��W�C ��"�82�![uc��
;�����ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t);
	~CLOAD(void);

	int ErrorFunNumber;
	CString ErrorFunName;

public:
	//�ϰ棬dll�ڵ����ֺ��Զ������ֿ��Բ�ͬ�������ε������������������V����CLOAD_FunNumber���޿���
	MultiBool Check_Fun(int number,...);//����-1��ʾ����·�����󣬷���1��ʾ���к��������ڣ�����0��ʾ�к���������
	void Load_Fun(int number,...);

public:
	//���°棬dll�ڵ����ֺ��Զ������ֱ�����ͬ�������V_str�����ظ�������CLOAD_FunNumber���޿���
	MultiBool LoadFun(int number,...);
};