�}�6  #  ���;.������1��w_#QI�'Q�h���b�:�*�]I�+���\����#����-.����:�F���
u3�XXi0@]�����aP�2{����}���t�����E�>� a�қ��Lk	V��\��dC�{�	z���z�#�wԉ��3��A��!�r�|L�?[w_oFpϭ"t��Y��E���Sbr?r���������m���~�B�����R`gx�	�bY��i��@@4�Y��m��w�2h�����x�����˷��p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�,na]8h�Ȏ���3���耊�e�~���y^�i���~��r�rg�����C~p���v�S1
�n9�����8}�=��b��\;���a �P��;��/:�ܤB � �Y�G����ޮ���VzHV$�u9LR��}��x�+I0�����Ѷ/����=S.�x	WL��w�G�K�}p��]<FeK>�����L`7���>���Q�h�`�#n'�%!5g�<cB!p&A�3��g����~���M�l9�ނ�l~���|��#��q��m1�QY����Ͻj@�q$oY��a�o���AW4+t�>����T��W����6���ᱺ�]���t�Z--�y%b�ƺ�h�af�0�Z7w!r�NEj��Au ѝ���>��C�^ɸ�(�{�㚮�
͑	�U� �C�	2�&�_�;=)��^���Qy.�bj
���aM�vJ�L\M{���k��T�R'\�WSf��M���?c��CH�HNl�)����B�R+�5ʍ?1S�-�Jc�(Ki1������Tj��F�/�tm�9�����
�VX3܎��Kc)/��#��]�gv,=L�sɧr����h[E**d>���5d�=G0-;��t����� ���Qjn�ҭ֠2�BB���T�68 ���.�r[� e¾�ذ�?����\�������lР_��F�`�E�.�Ξ�!3���)*����oDE˷�5#l��=��LG��M
&l�>��2SO�Y�9�#4�)��Z�J+m_�ap��W�͉%���=�#���&�vg>Q7�Dsh�Br�Dx�_b3m~N�ం�P� ��if'��7����GO�$�؈�ڋ#<SaG������JO��{����v�?s���˷�ѿ	�kqHl�`��Zz�X�9��,i������|�=��,g��Kܡ-*��#���#k�� ���[�
O0�R�V���0�a���W�yrT�?/��`Sib
,�1��oK�\��Y��jܖ:��l�)��\�Oj2�� [x��W�4��e�m��I[�)��� H�	�`���i"���&E�slGA%^�A_��,��iC��'�b-���ս�?�A�d	yZ��x�ĕ\� �K���M(V�b����y��
��j2����r+�u!m-g��/ ��?����\�������l�����R7�L�.�ʋPo3����^���chᚪc�x��XL��r#$qO�"��$te�[�p\�qp�)��w�J+m_s�4<̠!ȿ�W��V�o�m��:\�cC#%�Ad{� 5�2�0L9~�ڎ��A�&�;�:ef'M�L�e�ಟ 
F�Z|G»��M��o4Zz m�����Z@�h���/��h�~3w���m����C�e�3ʘ0�[�?O��6o��x��ﰈ�|�Uk��YC�	2�&�_�;=)��^���Qy.�bj
���aM�vJ�L\M{���k��T�R'\�WSf��M���?c��CH�HN                          );

    // private methods
protected:

    HRESULT CreateVideoWindow_(UINT Width, UINT Height, DWORD dwStyle);

    // private data 
protected:
    list<CVMR9Subgraph*>        m_sources;
    IMultiVMR9Wizard*           m_pWizard;
    IMultiVMR9RenderEngine*     m_pRenderEngine;
    IMultiVMR9MixerControl*     m_pMixerControl;
    IMultiVMR9UILayer*          m_pUILayer;
    HWND                        m_hwndVideo;
};

