�}�6  �  r�w���E����� 1�r�RMp?T)ݑ��eO��2<�w]���6w/�L��F_�0Z@�5�FW�����D�����lxx��I�Vq���G�~���&3��"�ly��N��\v4�'��Ά%>q����	�ሲL��a?��� ɳE�K,ٽi�z)P��#��L�����?qu|��H�� �(�����^��U:��=��'���L��-K��3`	3���!a�Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD�1�K��6w�M�?N1uբl |�7��l!BW�L�� 9�8�7���bok�������Pq@-1q.������#k���;KpjR_Y-��&�߽e���]����g;���Gع�c���LC�mfgD���������t��|'���JG����krF[I�����ķ(*Z���`G����w�'�h��86���ArY�K���m�%<k>����h�@ƴU�g/�UzI�Yo����TL��1@c� |��1.����42IcNi����.��Y�k3�Y��d��
�)��)S���f<�b��09D��?<4����c�Cܽ��"�8�r+N��ڧ.���G���P\�ۮ�y�o1z�	~F�t�Iz��(o}�y`���ߩ�ת#�X��	:���*gڸ;�߆I�z�V��V�5�t%a��As�,{Md`�?
�������I6<\�����'	��1U� ��v-b ���rqz��D��]���So�*�Utypename T>
__inline void RELEASE( T* &p )
{
    if( p ) {
        p->Release();
        p = NULL;
    }
}
#endif

#ifndef CHECK_HR
    #define CHECK_HR(expr) if (FAILED(expr)) {                   \
        OutputDebugString( hresultNameLookup(expr)+TEXT("\n"));  \
        DbgLog((LOG_ERROR, 0,                                    \
                TEXT("FAILED: %s\nat Line:%d of %s"),            \
                TEXT(#expr), __LINE__, TEXT(__FILE__) ));__leave; }
#endif




