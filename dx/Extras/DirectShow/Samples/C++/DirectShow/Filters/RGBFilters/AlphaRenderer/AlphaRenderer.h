�}�6  �  �}��8(����� 1�V^#Qs'�/�3zm��!>&	��XƯq�C$�:���]v��Ԗ���_d02B��C���	P��vST�1Z��c�~PM�.m�e�!j@:��U2`F^���g�I�d������ul���>Ei��!a�Kt�Aʏ�|��X,����� rX��K�jV\�;Uj���5��	�3jz*��^�f��Fr��?�͆77NUj����<cR2��٤�Υ8����'c���&!H�%`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�+���M�qѳK]�)��|1�vÇ�&�>�����9E��R�T?t?|z�~��L�ݥ�e�2yS-#�Eǔ�7� kC�̤_bFD!���L4�SZ��y�k�t�{�i��Kr���>ƥ����la��L���zɾ#`̪
���]]Vp�����/9sR���^�&���s�"\�v�#�t4e���zz�
��QQ"Xý�^��l'��`X`C�A�eZ�)��&����9\t��<���bη_��hs�x��J��\�Q\P4�4S<*���
�Ay��s 6ΰ��_7�1�~9�>��Рԫ���hx�e�׳4��_��JqV~E������?tח�D^|xtHV�T�tT5�r����lL�7�k��{�O�+:'�ת�����@g��۳�M����	Hk1�����`h���p�,?�_)���kC�z����Qa����]�̓=R�����!:�f��.�mFV�a��y���>̚_j9�[ɗ�SULT SetMediaType( const CMediaType *pmt );

    // override these to receive indication of when we change
    // to Pause/Play (Active) or Stop (Inactive) state.
    HRESULT Active();
    HRESULT Inactive();

public:
     
    // only way to make one of these
    //
    static CUnknown * WINAPI CreateInstance(LPUNKNOWN lpunk, HRESULT *phr);

};

#endif