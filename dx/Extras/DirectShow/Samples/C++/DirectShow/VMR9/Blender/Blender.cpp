�}P6  �  Ch��}������� 1w�"Q���(��4k��Cj��b�YΡ)ƃa����r��JC�f�|����%��hM��["�.x�I�!6��M�)~���~���k�=��7ĴF���R:��)�V���_�\6��F_!,�:9L��ߋ{9�U�<�Q�p
��؟ʠ��f]����s� qP8�ZZ+o ���g`wM+$��f�卛AB�o���	�ud:�
����Ϥ44-�������͋��5n��S�� �T�a�wx�Z�HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�#-��c�u�Z���m��L�D��G��Np"�j��p�w��o԰g&���Qe����5˒z̄��n����	~��AZ�-9�u򜌪/����Y�q����xe;d��2B������7D�/�Bn�Q� )�=��?���ȅ�ͯ��ԁ	k�)�A�B��`o���/�J��SU�I:O��1�c��;�4yY0N$�s"!i�@��y���L�g��pe��\��#y�"��g�"�{�D�x|�r!&Ʉ��Qf�;1�}�4��g�>��g��7��ej�e3�|/��#�"��v�	N�ˢ~�M��m3�R	d	��p�0u�t�I�$�x��++CT���sg���冒o��c��s�����>����|�"�祮9p<[Seb@��B���8vh5�<fB�$�LWo#(�{�\���-f�����^��� ����V���E{Ob��Y��RĆ�_������JC�>�+N/�n�h�>����;��қ��%n�I,l#��:c@`�M)@N=��Ew��P�C�C�>��nn}b�}�.4�D���O$�96��3`��,(qJ�D~UyEB�{Z�̑���3���/k9��˙�^��I 8�O�yE��6yG}��v3��К(��A~p
�o�}��"l�mT�?i�u^��� ����e0#����K�bp{����jd�9�t�4.�|iB��;��p_+6Z:-9V	Q�hXr���o
����f^�=�FGu�<[�]>��U֓qu��D�I�G�妊K�N�#w��w\Q�1�&q�r��'1�1���B��h��;��}ZV�$�?m��:�AeWK������ĵUJŀ0����M�Փ`�K���O�K��5J��9�VT�'�/�7�,K&s��?�F&E����߾9&������?e�n>K\R�s眣��N�O���r��D� ��x���?�*\[�\�M����	;��e��eZN9�ڢ|���Tb�u�=����H��)��l�+�A	m����N�`��s�&a(jNY��0�C��c,Z�S� ��A�0�ߓ��p�,ݷT��v]A.K�O�~XZʳ�]x�_h:K\�bKM!=E�kN��ɻ��+>��L|\��TZ/��"e����ț�N�XG
Zk���D@|vL�X�y��QfF���S���5&��$v��DL�g	YA�h��������1�����A-��Bf������$"�{HGq���v���O��0�2=��+wrṎڭ�$I�ձ��1��'[{�P�ȷ�����|׋
В�8"�@�g�ug�62h����e��Ӵ�M\x�E)s�[\�|GH~���`�n���B��;生!���@^��R,��"�mb2: �s,'���	�+�H
���;��|:*��d����PM��B�ۉ��*�����K�W6|��8��@M��j�����Al6���*{���'w�%V�i�A�y�3�}5s��g-��o�����̱��B�Ytystems.
    Enable3dControls();         // Call this when using MFC in a shared DLL
#else
    Enable3dControlsStatic();   // Call this when linking to MFC statically
#endif
#endif

    CBlenderDlg dlg;
    m_pMainWnd = &dlg;

    // Display the main application dialog    
    dlg.DoModal();

    // Since the dialog has been closed, return FALSE so that we exit the
    //  application, rather than start the application's message pump.
    return FALSE;
}
