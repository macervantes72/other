�}6  ;  }��n+�T����	1��wSMI�'��!��w�.V������������y77p*;ע��D�<�Yԧ�ٺ:��Wt���7@NY� ԡ�،�2�[?ɏ�U�Ag���y�YԻ@꿑��E���N�Ɉ���ы+U��P��N�
AǐX5E���OA:|\7sp[Q�o���+�HH{3t�Z�C�j�Dpr���2rb}P����3b9Gb�r�i�؊[�V;U��]$��7ą��G��<U��W��φ�ޅw�n(�o^�����(���9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD.�O��w��,�aǅ]�o���)��Zxr�W��e������=!}��lΌ���]�|��T]�At$�b�w�&�a"l*Ϛ��s<ԡ�b42��W�<)��a��A?�l�J�W�Y
�3�Rkإ��7+�����e���N��%�z��}�W�	�����g�f�;; �J���Ѕ�*����o������7�%��I:����.�]!k#�<���Y��;�#���W�(�<U�k^U�s������+�ܑ�1�xe�G=1�~�����HQ�q�F�<�� ��"UK<F0�W�@wFD�/��?x��w'[� u�i"�%�.�;���������4�.�f�ʗy΀�]<�.(>J�8P���?D�
u�$+��Fp?ݮ��L2b��ehy��/��D�+e���o�u~�ï� �\����@�XB,���E�i5�e<
R�?�6���9i<*���ԏ���(��G6���b�����X�ހ��A���"1�   {
        delete this;
        return 0;
    }
    return m_lRef;
}


// LogError: Log an error to the application window.

STDMETHODIMP CErrorLog::LogError(
        LONG Severity, 
        BSTR ErrorString,
        LONG ErrorCode, 
        HRESULT hresult, 
        VARIANT *pExtraInfo)
{
    if (m_fEnabled)
    {
        PostMessage(m_hwnd, WM_ERRORLOG, (WPARAM)SysAllocString(ErrorString), 0);
    }

    return hresult;
}


