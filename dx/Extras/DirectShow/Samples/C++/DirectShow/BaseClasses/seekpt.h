�}�6  �   �}�f�R�.����� 1ws^#Q�?�)!ܑ!��)y�����H��Yw\VDb�����HO˚�d�u�џ�!��ED��^?�$�]�皝~m����o3�&��<�����j���v��F��>4i3�r��v:�1'���N&��J��n��y�'ఃID�C4&}��/������A��_oJk�od�>W�l�Ck��b	��Wl^���b�w���M�HC�ϥ� ��� z�@�lM32k��:��cA�d� �$�#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tAR *pName, LPUNKNOWN pUnk, HRESULT *phr);
    ~CSeekingPassThru();

    DECLARE_IUNKNOWN;
    STDMETHODIMP NonDelegatingQueryInterface(REFIID riid, void ** ppv);

    STDMETHODIMP Init(BOOL bSupportRendering, IPin *pPin);

private:
    CPosPassThru              *m_pPosPassThru;
};

#endif
