�}e6    �#|�z�Q����1�ms_SQ��2��4�ė3�Pt�9���!Bk�	��,�N.:�c�ˇ�^�@��>�.�?oH핃��Ҙ�V#޷�`*ϩ�	��_u͙������h/�}r23 �S�=�f���G�z�?�a�vq<['��c@�ձ\�>���.�\���!�9�uzwٛu��
7�E���9��r�/]�N̊}���YV ��h�S�r�];���́�<����wl��k�`�(���颛}#�Ƚ1��0�
�Ph�O���_4��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD)�E�L��Xp�W��P8�����l�Z�c�285��8W��n�#�|-�9n����I#��ߓ���R����o��WÇ� y�AT�4X]B�2$J�;Oݻ]RQ�v ��(z��P������	�ͫ�db9�ry*�e�O�<Y由�>��x��XsDjn*-�J��;���qPsA��&l��ׅ\4����vŷ�&�������Ś��{��i�R��)"���B(�*�;#j<��9"����v1�Q����hl�B�,z�C�fY(����q�Zs\�=:��0�v����z���jD}ZO�����R���7Z9'i>����ic�͠��s�^�����8TM�
@LՁ�@%��-�������c���&�e���'Y��Խ_��A���AR��ɀ6�94<�(^|�w��R��ТK��ig�~��j�V#@�Q�:C�a꺶L�L�}Ӕ���_ �٢�ᬀ�m'q��t�(��P.���u���A���l-�K=��j�+p5:'ǂ��V���60�w�w`��|���&
��nu�٬Kar�)�-��j ��]�D�"�=�{%􉕹���{M�Cњ-3�\�qf�r"BJ��L��0��.F��WC�k�e_#	�̋�}��&ۉ�ڬ��c���1Pf,]��.@�-=Glr�&�xvNӐ�76�`Lm9�r��W̌0��ݷ��?l��,N����}�hc�����q�~��u~>1���E�'��6F�L]1�u�˵�O��� ����%�~��CK(��y�շe�Q�Ӹ3	
R@�1h�Tb
��V4#��I����sPb=����ɷ�C�sB}C���Jtʍ&[s�F�C��i�^V�����|���x�M���?Cq��[��ZW���}���58�����s,H$-`R�z{[����>=̣�);Ib�OB!������1��k+�7Vl8_�fV�XD�|S����Ki�ѥeM����K�89�V�L179DTƽ^8ner(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

private:
    const ButtonEntry *m_pButtonInfo;
};

// MessageHandlerChain is a helper for implementing the property page message handler.
// It takes a NULL-terminated array of Message pointers (could be CSliderValue or CRadioChoice)
// and calls them in order until one of them sets bHandled.

LRESULT MessageHandlerChain(Handler **ppHandlers, UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
