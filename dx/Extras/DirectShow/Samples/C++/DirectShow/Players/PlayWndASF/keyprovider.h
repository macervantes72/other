�}�6  =   R��������� 1�ww_#MH�<�^��i	E;m�|䟅��u�U(�ҕ?������d[�������AU����sPk���4�	��<�Ӈ_P�hq���.�}\ �>�zSS@����j)��8ev����	s�0	�;;�N���'m^W�%B��٬��^�x+��Tq����B�Ձzru~P�Y���[�}�:<Z�Lh�~�[7Cur��5���	�K]��� �+w�fP�/��т������#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t;
        STDMETHODIMP_(ULONG) AddRef();
        STDMETHODIMP_(ULONG) Release();

        CKeyProvider();

        // IServiceProvider
        STDMETHODIMP QueryService(REFIID siid, REFIID riid, void **ppv);

    private:
        volatile LONG m_cRef;
};
