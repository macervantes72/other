�}t6  �   �;KrU����� 1��WY#MI�'���<�yW�:�寘�R�ѣQ���Asl��vR�Y�]x��[�:V����usk�i|�[�=�"�2#{h��I��ƴ��Դ R��g)�a'C�.��qY�ؗ�X[���EjSn�y�h����TM��pД#'m}_!_W��6ǓQ[��Kc?�K� �>z>���&��Sq 1)D��w�8\��noE�̙p �؛��X%��c?t��Q�^Ksy�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�&5���������3^,���j#��y��=�"Z����y��kL; EU���}���q��?�;���COO�Cus�4��E*�M���r��B�wD�)�a4��H��R�T�Yu��sk�^��|�����H�tҶ/���'�ڵ�U���*Wz��P�X�f�9���� s^��r�h�����_Q3T��ַ��x�S��H���e�(6�NAW�J���G��S&�'���VW�q�����>D/6�  ���:Ku^�0W9�S��hG>���AZ^P晷���<�x��I�|���$��H�s=���ݝ�#���T��� �k��ɪp��"��[TM����y�+9cR���.x�R��Ie�F�P��2nWWDfJU���Ɠ�#e�ݳ����ݙ�!�.!��[�1v;�F�f+�6���3�G�x������eCK��YH��<��^�;����TE����*~�z?w�m^����%��,�w�|�
з����l�r2( BOOL );
STDAPI AMovieDllRegisterServer();
STDAPI AMovieDllUnregisterServer();

// helper functions
STDAPI EliminateSubKey( HKEY, LPTSTR );


STDAPI
AMovieSetupRegisterFilter2( const AMOVIESETUP_FILTER * const psetupdata
                          , IFilterMapper2 *                 pIFM2
                          , BOOL                             bRegister  );

