const char *dyna_line[DC_NUM_VECTORS] = {
	"@dynamic=md5($p)@900150983cd24fb0d6963f7d28e17f72",
	"@dynamic=md5($p)@527bd5b5d689e2c32ae974c6229ff785",
	"@dynamic=md5($p)@9dc1dc3f8499ab3bbc744557acf0a7fb",
#if SIMD_COEF_32 < 4
	"@dynamic=md5($p)@fc58a609d0358176385b00970bfb2b49", // Len 110
#else
	"@dynamic=md5($p)@142a42ffcb282cf8087dd4dfebacdec2", // Len 55
#endif
	"@dynamic=md5($p)@d41d8cd98f00b204e9800998ecf8427e",
};
