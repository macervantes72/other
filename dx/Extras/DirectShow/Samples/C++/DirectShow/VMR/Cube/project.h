�}�6  j  �wTYVs������ 1ws^#Q�?W*!����E֬��s����?C���_�kMp'�i�5��f��1f얨B�7��Ý��|SAJ����r��/tc
���,=vh(��PW\ܲ�ג�z��y���7V��\�&"�^�;.�:}������	l��	�i��9��{���	���En�|\rE^�,DtJc��(�H�����.��돚����޼ut�5"�>��-�eN[ߘ?��r,K-���y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tdefine __RELEASE_DEFINED
template<typename T>
__inline void RELEASE( T* &p )
{
    if( p ) {
        p->Release();
        p = NULL;
    }
}
#endif

#ifndef CHECK_HR
    #define CHECK_HR(expr) { if (FAILED(expr)) __leave; };
#endif

