const char *get_qaac_version()
{
#ifdef REFALAC
    return "1.00";
#else
    return "2.00";
#endif
}
