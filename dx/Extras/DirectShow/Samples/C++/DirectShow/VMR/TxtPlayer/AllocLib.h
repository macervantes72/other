�}36  �  �,r�˽������ 1s^#Qs�U	�&1��E�h�YpA\��'!�e�!$�Ѵb�͐�vk�Rs�M��MA�?��1$�PN=���|۲��A
}���]��ha<��Q4�,��O�Q�S��H�:X���50��5I��R\R}v��q?� �Rg��=�'�%�t�y]�]�Ƙ��(>���6�A��5�XlO/\4�}�n&i��cpf�=A9�h��$J������F� �6���>�)�oR�kܐ�<���y���O�@1`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t ZeroMemory(&t, sizeof(t));
}
#endif

#ifndef __INITDDSTRUCT_DEFINED
#define __INITDDSTRUCT_DEFINED
template <typename T>
__inline void INITDDSTRUCT(T& dd)
{
    ZeroStruct(dd);
    dd.dwSize = sizeof(dd);
}
#endif


HRESULT
PaintDDrawSurfaceBlack(
    LPDIRECTDRAWSURFACE7 pDDrawSurface
    );

#endif