�}6     �k �[�Y����� 1�RY#Qp?T)�K�A�I�؋�YQ18���V�u���uv���a��P��ۛ���5�ɔ}� ����d��O#a�砷��>���gC	����-l �:�oJ��"���l��c���k��C�.��+A-�K`j���H��)=Բ�$��"
���HC��1�`��S����ڸ��ht�"�XeZE��_��Gw=o��� �������>a�3�F6�]��>���E� \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�(p>&Ɯ8���^W�{ g�z���
x� ���o�fl�3���� �pH�_;)�%��"g�o������3:�y�{T0�W#(p "T.�Vsnw�қ��	ʥ�޸�x�p��'Z����Y�:k��^��6�=�]�$\����X4��o��e5����RL���Vg��S,�؉�~o��!��b�g�5H�����A�� $��d?+��pS90V��
��\5��4l�Ȅ���S�̍z٨���u	���X���vV�~�v\�� 92?[�F�"�Pyw�y��H������P�!d?�`8 ������.ӷ���L����X>���f�GV2xy��i�hiK� �@��;�=����&4Ь����Z��!�D�q����vQ����2N�x��Ɗ�N��D5����]��Q��7�ٌs1���p�D�<z�>wH &v4��.�>iBs�����kYWޭ����,��؇�C1W����\�.�0��ta[4];

    DWORD m_dwTimeCode;
	DWORD m_dwNextTimeCode;

public:
    CStreamState()
    {
        Reset();
    }

    //  Returns true if a start code was identifed
    bool NextByte(BYTE bData);
    void TimeStamp(REFERENCE_TIME rt);
    void Reset();

    REFERENCE_TIME PictureTime(DWORD *pdwTimeCode) const
    {
		*pdwTimeCode = m_dwTimeCode;
        return m_rt;
    }
};

