�}�6  �  ��~L:ǋ����� 1w^#M�'�/ewhy�)>Ȝ��<q�v���Ƶ/ Q7�<��iJgX��A�t�#-5}	8T�x���A�<��ZF߂:l
x��΍�������Ο��LI�JlO+�()y�(�����fv��4�����sHg�s�;vru�s�D��J=5ಖ&�*S���n�B#�Ky��[	4�9I\�4���\5��;=l�6�.���p��gH�͑*HђqI�9�91���>/e��-�*?#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD+���=�5���^啩	#���r��s�.Xh!���O
�F8�^�ƚQ�MՁ��ޫ�,B�z��"�����[Az ;;����w�	'A��K����
�V^��c0��b�C�gU�y���"%�"� fU-�'Ѧ�9e%.��"�C���F���<�M�P،Y��H��3����.�&�d�r�����O��g����n�c�����ݴ��
Z�|�gbq���.?��eP1�[�!�"@N�9f{G���|�R��'{<�Y�9;��\^���6`����-.�@2[���?Hs��P�!��o��'��M���ck�G׋4�7���A� �l3�?{��.�OU �i �^\8�:U� ��'�+% ���LO���|��4��U �XHo���:b��<q���3���ƥ}8�����Pv|,�'���˯�o���k�/�X���4�qֱ�m�ϑt�X����;�a��954�R֪K{2ns��O�����D�q�&G��mrl+z�Oğ��'�%GP�
Iɭ'm����ק�BI�&��/0vSoX^U�'\��i�q��qv�' �j��e.�Ε��W�1~��NZ�P�T��<fQ�&S��d���K�轆ŭ��X���x�/�p����1^��_k���.�
G=�����A~���J�\�e��ijK��d�w̨�H�Sd2���"g���!OE3���LL��~�� �!����$�0�B�_%�ǞO�/X��Ƃc�$U�G�+Je�o#���J����Oa�u��T~�j|Xy�?<��am*�)�Ê6^C/s������V*��m�=�������S��^�>���LMyK�]�S=P�At� �@�'p�ї�9Ɨ�t4_�;�I�k���Y����S�U�ݝ�;Ǭ�������Ѕ�L�O}г8 �a(�c��-�VO��&�a��i]���_U�b���Spſ-�az�-8)�Q�Upb3�Q˯�++��hk�W δvյ�2�g OnThreadCreate(void);

    // Quality control notifications sent to us
    STDMETHODIMP Notify(IBaseFilter * pSender, Quality q);

    HRESULT DoBufferProcessingLoop(void);    // the loop executed while running


private:
    int             m_iImageHeight;     // The current image height
    int             m_iImageWidth;      // And current image width
    REFERENCE_TIME  m_rSampleTime;      // The time stamp for each sample
    CAlphaBlt*      m_lpAlphaBlt;

}; // CSparkleStream
    
