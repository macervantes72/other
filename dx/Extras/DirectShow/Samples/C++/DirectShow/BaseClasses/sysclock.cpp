�}�6  �   |0k���i������ 1ws^#Q�?W*!ܑ����5��	��8'�f�C?6�䁫��:�ZU[���TF��3�̞��Xq�H~�&5@G�Jة%�������\���o��qJ{���b'&$�at
`.qo�>�<tP�g�w�d��"��x�w�[�WRL��Y���s�=�h�o��ɝ=�Ҏk���ڴ�s�������/&\y�b�yhWy��l�)I\ �q�����"��sw��'��	v�˘Epkc  +%�u��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�/��D�1���P��XE-ꗖ���X.�By �	�dE>pxΩ�p4��H�c��}I6C��wT佪�"��s�,�����#g���P�#~D	���(i��N�\�m�[�T��t`1�;D�|l("�\�(y�ޢ����B��D�<�y�Im2V�_v�=g :m�\3w�)/�I�jSl�A���g)@�l��5l7��T	�אt���r�tzlO����&wH�TZ$��MxH��]�jo��B�8w17�lJ����5>�䉪6pj�y�ڒ3�o�E&D��QNx����N�K/5x�8N�꒭r�����ǝ?�>�uy��>�>� �K�I̵/YZx6�s^m3�kb�r�V@t���)���)s����^�L��{"�c��D,Lb{���=�kW��Ei�l�`�\� ٺ2r{	��<��۩̊�°Q]�-Hb&�B�G��)Ew��Mk����j�WxP��S�PN���07?,-3.�g�J���ʎg�Kl�*���}��z!�v��z��p��F ��j@;ȗ)[�D��Y���C1H �,3B�ZmA�+z�E%b�\H��]��	ު�u��Z�M�H�%<���j�m�w��z��/�Dk������dj���A3ޡh��٦#mrVg��K�(/������Y����]�!����U-���0n�ʣ�Y���b�wc�fH(�[#���D
?������4�HCxr�X+����=٭;��YR���`��=�����O�SZ>2��ɨh�ؑ_3*C<�$��0��?e/ZVz^&�j�$eP�W���:�^�aMv�A�?��V�CGv��xx{�O�WUG���Ѩ�nR�@�6I{1���`м����Ǽq�����B�媮c����8D��ϼ�!,b%z@M�ƻ� �v�^4;Js�p�o'Z�=Adi9��O/����n!I����
I��È��Ja�����\�[/��I��,������q�a&pm�̊�&����utic_cast<IAMClockAdjust *>(this), ppv);
    }
    else
    {
        return CBaseReferenceClock::NonDelegatingQueryInterface(riid, ppv);
    }
}

/* Return the clock's clsid */
STDMETHODIMP
CSystemClock::GetClassID(CLSID *pClsID)
{
    CheckPointer(pClsID,E_POINTER);
    ValidateReadWritePtr(pClsID,sizeof(CLSID));
    *pClsID = CLSID_SystemClock;
    return NOERROR;
}


STDMETHODIMP 
CSystemClock::SetClockDelta(REFERENCE_TIME rtDelta)
{
    return SetTimeDelta(rtDelta);
}
