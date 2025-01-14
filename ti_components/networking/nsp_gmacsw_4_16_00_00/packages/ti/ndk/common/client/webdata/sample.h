#define SAMPLE_SIZE 2422
#if defined(__GNUC__)
unsigned char SAMPLE[] __attribute__((,section(".far:NDK_OBJMEM"))) = {
#else
#pragma DATA_SECTION(SAMPLE, ".far:NDK_OBJMEM");
unsigned char SAMPLE[] = {
#endif
    0x3C, 0x68, 0x74, 0x6D, 0x6C, 0x3E, 0x0D, 0x0A, 0x3C, 0x68, 0x65, 0x61,
    0x64, 0x3E, 0x3C, 0x74, 0x69, 0x74, 0x6C, 0x65, 0x3E, 0x43, 0x47, 0x49,
    0x20, 0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x3C, 0x2F, 0x74, 0x69, 0x74,
    0x6C, 0x65, 0x3E, 0x3C, 0x2F, 0x68, 0x65, 0x61, 0x64, 0x3E, 0x0D, 0x0A,
    0x3C, 0x62, 0x6F, 0x64, 0x79, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68,
    0x31, 0x3E, 0x43, 0x47, 0x49, 0x20, 0x53, 0x61, 0x6D, 0x70, 0x6C, 0x65,
    0x20, 0x46, 0x6F, 0x72, 0x6D, 0x73, 0x3C, 0x2F, 0x68, 0x31, 0x3E, 0x0D,
    0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68, 0x72, 0x20, 0x57, 0x49, 0x44,
    0x54, 0x48, 0x3D, 0x22, 0x31, 0x30, 0x30, 0x25, 0x22, 0x3E, 0x0D, 0x0A,
    0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68, 0x32, 0x3E, 0x46, 0x6F, 0x72, 0x6D,
    0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x31, 0x3A, 0x20, 0x53, 0x74, 0x61,
    0x6E, 0x64, 0x61, 0x72, 0x64, 0x20, 0x45, 0x6E, 0x63, 0x6F, 0x64, 0x69,
    0x6E, 0x67, 0x3C, 0x2F, 0x68, 0x32, 0x3E, 0x0D, 0x0A, 0x0D, 0x0A, 0x20,
    0x20, 0x46, 0x69, 0x6C, 0x6C, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x66, 0x69, 0x65, 0x6C, 0x64, 0x73,
    0x20, 0x61, 0x6E, 0x64, 0x20, 0x68, 0x69, 0x74, 0x20, 0x27, 0x53, 0x75,
    0x62, 0x6D, 0x69, 0x74, 0x27, 0x2E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x66,
    0x6F, 0x72, 0x6D, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x6D, 0x79,
    0x5F, 0x66, 0x6F, 0x72, 0x6D, 0x22, 0x20, 0x6D, 0x65, 0x74, 0x68, 0x6F,
    0x64, 0x3D, 0x22, 0x50, 0x4F, 0x53, 0x54, 0x22, 0x20, 0x61, 0x63, 0x74,
    0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x2E,
    0x63, 0x67, 0x69, 0x22, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x4E,
    0x61, 0x6D, 0x65, 0x3A, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20,
    0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x74, 0x65, 0x78, 0x74, 0x22, 0x20,
    0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x6E, 0x61, 0x6D, 0x65, 0x22, 0x3E,
    0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x49, 0x20,
    0x64, 0x69, 0x73, 0x6C, 0x69, 0x6B, 0x65, 0x20, 0x73, 0x70, 0x61, 0x6D,
    0x3A, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70,
    0x65, 0x3D, 0x22, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x62, 0x6F, 0x78, 0x22,
    0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x73, 0x70, 0x61, 0x6D, 0x22,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x6E, 0x6F, 0x21, 0x22,
    0x3E, 0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x46,
    0x61, 0x76, 0x6F, 0x72, 0x69, 0x74, 0x65, 0x20, 0x50, 0x69, 0x7A, 0x7A,
    0x61, 0x3A, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69,
    0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72,
    0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22,
    0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65,
    0x3D, 0x22, 0x70, 0x65, 0x70, 0x70, 0x65, 0x72, 0x6F, 0x6E, 0x69, 0x22,
    0x3E, 0x20, 0x50, 0x65, 0x70, 0x70, 0x65, 0x72, 0x6F, 0x6E, 0x69, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75,
    0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72, 0x61, 0x64, 0x69,
    0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x70, 0x69, 0x7A,
    0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x73,
    0x61, 0x75, 0x73, 0x61, 0x67, 0x65, 0x22, 0x3E, 0x20, 0x53, 0x61, 0x75,
    0x73, 0x61, 0x67, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D,
    0x22, 0x72, 0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65,
    0x3D, 0x22, 0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x63, 0x68, 0x65, 0x65, 0x73, 0x65, 0x22, 0x20,
    0x63, 0x68, 0x65, 0x63, 0x6B, 0x65, 0x64, 0x3E, 0x20, 0x43, 0x68, 0x65,
    0x65, 0x73, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C,
    0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22,
    0x72, 0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D,
    0x22, 0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75,
    0x65, 0x3D, 0x22, 0x6F, 0x74, 0x68, 0x65, 0x72, 0x22, 0x3E, 0x20, 0x4F,
    0x74, 0x68, 0x65, 0x72, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x46, 0x61,
    0x76, 0x6F, 0x72, 0x69, 0x74, 0x65, 0x20, 0x43, 0x6F, 0x6C, 0x6F, 0x72,
    0x3A, 0x20, 0x3C, 0x73, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x20, 0x6E, 0x61,
    0x6D, 0x65, 0x3D, 0x22, 0x63, 0x6F, 0x6C, 0x6F, 0x72, 0x22, 0x3E, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69,
    0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x72, 0x65,
    0x64, 0x22, 0x3E, 0x20, 0x52, 0x65, 0x64, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x67, 0x72, 0x65, 0x65, 0x6E, 0x22,
    0x3E, 0x20, 0x47, 0x72, 0x65, 0x65, 0x6E, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x62, 0x6C, 0x75, 0x65, 0x22, 0x3E,
    0x20, 0x42, 0x6C, 0x75, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x79, 0x65, 0x6C, 0x6C, 0x6F, 0x77, 0x22, 0x3E,
    0x20, 0x59, 0x65, 0x6C, 0x6C, 0x6F, 0x77, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x63, 0x79, 0x61, 0x6E, 0x22, 0x3E,
    0x20, 0x43, 0x79, 0x61, 0x6E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x6D, 0x61, 0x67, 0x65, 0x6E, 0x74, 0x61, 0x22,
    0x3E, 0x20, 0x4D, 0x61, 0x67, 0x65, 0x6E, 0x74, 0x61, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x62, 0x6C, 0x61, 0x63,
    0x6B, 0x22, 0x3E, 0x20, 0x42, 0x6C, 0x61, 0x63, 0x6B, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x77, 0x68, 0x69, 0x74,
    0x65, 0x22, 0x3E, 0x20, 0x57, 0x68, 0x69, 0x74, 0x65, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x73, 0x65, 0x6C, 0x65, 0x63,
    0x74, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x70, 0x3E,
    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74,
    0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x73, 0x75, 0x62, 0x6D, 0x69,
    0x74, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x53, 0x75,
    0x62, 0x6D, 0x69, 0x74, 0x20, 0x46, 0x6F, 0x72, 0x6D, 0x20, 0x44, 0x61,
    0x74, 0x61, 0x22, 0x3E, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20,
    0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72, 0x65, 0x73, 0x65, 0x74, 0x22,
    0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x2F, 0x66, 0x6F, 0x72, 0x6D, 0x3E,
    0x0D, 0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68, 0x72, 0x20, 0x57, 0x49,
    0x44, 0x54, 0x48, 0x3D, 0x22, 0x31, 0x30, 0x30, 0x25, 0x22, 0x3E, 0x0D,
    0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68, 0x32, 0x3E, 0x46, 0x6F, 0x72,
    0x6D, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x32, 0x3A, 0x20, 0x4D, 0x75,
    0x6C, 0x74, 0x69, 0x70, 0x61, 0x72, 0x74, 0x20, 0x46, 0x6F, 0x72, 0x6D,
    0x20, 0x44, 0x61, 0x74, 0x61, 0x20, 0x45, 0x6E, 0x63, 0x6F, 0x64, 0x69,
    0x6E, 0x67, 0x3C, 0x2F, 0x68, 0x32, 0x3E, 0x0D, 0x0A, 0x0D, 0x0A, 0x20,
    0x20, 0x46, 0x69, 0x6C, 0x6C, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x66, 0x6F, 0x72, 0x6D, 0x20, 0x66, 0x69, 0x65, 0x6C, 0x64, 0x73,
    0x20, 0x61, 0x6E, 0x64, 0x20, 0x68, 0x69, 0x74, 0x20, 0x27, 0x53, 0x75,
    0x62, 0x6D, 0x69, 0x74, 0x27, 0x2E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x66,
    0x6F, 0x72, 0x6D, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x6D, 0x79,
    0x5F, 0x66, 0x6F, 0x72, 0x6D, 0x22, 0x20, 0x6D, 0x65, 0x74, 0x68, 0x6F,
    0x64, 0x3D, 0x22, 0x50, 0x4F, 0x53, 0x54, 0x22, 0x20, 0x61, 0x63, 0x74,
    0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x73, 0x61, 0x6D, 0x70, 0x6C, 0x65, 0x5F,
    0x6D, 0x75, 0x6C, 0x74, 0x69, 0x2E, 0x63, 0x67, 0x69, 0x22, 0x20, 0x45,
    0x4E, 0x43, 0x54, 0x59, 0x50, 0x45, 0x3D, 0x22, 0x6D, 0x75, 0x6C, 0x74,
    0x69, 0x70, 0x61, 0x72, 0x74, 0x2F, 0x66, 0x6F, 0x72, 0x6D, 0x2D, 0x64,
    0x61, 0x74, 0x61, 0x22, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x4E,
    0x61, 0x6D, 0x65, 0x3A, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20,
    0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x74, 0x65, 0x78, 0x74, 0x22, 0x20,
    0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x6E, 0x61, 0x6D, 0x65, 0x22, 0x3E,
    0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x49, 0x20,
    0x64, 0x69, 0x73, 0x6C, 0x69, 0x6B, 0x65, 0x20, 0x73, 0x70, 0x61, 0x6D,
    0x3A, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70,
    0x65, 0x3D, 0x22, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x62, 0x6F, 0x78, 0x22,
    0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x73, 0x70, 0x61, 0x6D, 0x22,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x6E, 0x6F, 0x21, 0x22,
    0x3E, 0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x46,
    0x61, 0x76, 0x6F, 0x72, 0x69, 0x74, 0x65, 0x20, 0x50, 0x69, 0x7A, 0x7A,
    0x61, 0x3A, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69,
    0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72,
    0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22,
    0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65,
    0x3D, 0x22, 0x70, 0x65, 0x70, 0x70, 0x65, 0x72, 0x6F, 0x6E, 0x69, 0x22,
    0x3E, 0x20, 0x50, 0x65, 0x70, 0x70, 0x65, 0x72, 0x6F, 0x6E, 0x69, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75,
    0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72, 0x61, 0x64, 0x69,
    0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x70, 0x69, 0x7A,
    0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x73,
    0x61, 0x75, 0x73, 0x61, 0x67, 0x65, 0x22, 0x3E, 0x20, 0x53, 0x61, 0x75,
    0x73, 0x61, 0x67, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D,
    0x22, 0x72, 0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65,
    0x3D, 0x22, 0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x63, 0x68, 0x65, 0x65, 0x73, 0x65, 0x22, 0x20,
    0x63, 0x68, 0x65, 0x63, 0x6B, 0x65, 0x64, 0x3E, 0x20, 0x43, 0x68, 0x65,
    0x65, 0x73, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C,
    0x69, 0x6E, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22,
    0x72, 0x61, 0x64, 0x69, 0x6F, 0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D,
    0x22, 0x70, 0x69, 0x7A, 0x7A, 0x61, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75,
    0x65, 0x3D, 0x22, 0x6F, 0x74, 0x68, 0x65, 0x72, 0x22, 0x3E, 0x20, 0x4F,
    0x74, 0x68, 0x65, 0x72, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x46, 0x61,
    0x76, 0x6F, 0x72, 0x69, 0x74, 0x65, 0x20, 0x43, 0x6F, 0x6C, 0x6F, 0x72,
    0x3A, 0x20, 0x3C, 0x73, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x20, 0x6E, 0x61,
    0x6D, 0x65, 0x3D, 0x22, 0x63, 0x6F, 0x6C, 0x6F, 0x72, 0x22, 0x3E, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69,
    0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x72, 0x65,
    0x64, 0x22, 0x3E, 0x20, 0x52, 0x65, 0x64, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x67, 0x72, 0x65, 0x65, 0x6E, 0x22,
    0x3E, 0x20, 0x47, 0x72, 0x65, 0x65, 0x6E, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x62, 0x6C, 0x75, 0x65, 0x22, 0x3E,
    0x20, 0x42, 0x6C, 0x75, 0x65, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x79, 0x65, 0x6C, 0x6C, 0x6F, 0x77, 0x22, 0x3E,
    0x20, 0x59, 0x65, 0x6C, 0x6C, 0x6F, 0x77, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76,
    0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x63, 0x79, 0x61, 0x6E, 0x22, 0x3E,
    0x20, 0x43, 0x79, 0x61, 0x6E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x76, 0x61, 0x6C,
    0x75, 0x65, 0x3D, 0x22, 0x6D, 0x61, 0x67, 0x65, 0x6E, 0x74, 0x61, 0x22,
    0x3E, 0x20, 0x4D, 0x61, 0x67, 0x65, 0x6E, 0x74, 0x61, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x62, 0x6C, 0x61, 0x63,
    0x6B, 0x22, 0x3E, 0x20, 0x42, 0x6C, 0x61, 0x63, 0x6B, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6F, 0x70, 0x74, 0x69, 0x6F, 0x6E,
    0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D, 0x22, 0x77, 0x68, 0x69, 0x74,
    0x65, 0x22, 0x3E, 0x20, 0x57, 0x68, 0x69, 0x74, 0x65, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x73, 0x65, 0x6C, 0x65, 0x63,
    0x74, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x62, 0x72, 0x3E,
    0x3C, 0x62, 0x72, 0x3E, 0x55, 0x70, 0x6C, 0x6F, 0x61, 0x64, 0x20, 0x61,
    0x20, 0x66, 0x69, 0x6C, 0x65, 0x3A, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75,
    0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x46, 0x49, 0x4C, 0x45,
    0x22, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x6D, 0x79, 0x66, 0x69,
    0x6C, 0x65, 0x22, 0x3E, 0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20,
    0x20, 0x20, 0x3C, 0x69, 0x3E, 0x28, 0x49, 0x66, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x66, 0x69, 0x6C, 0x65, 0x20, 0x69, 0x73, 0x20, 0x6C, 0x61, 0x72,
    0x67, 0x65, 0x72, 0x20, 0x74, 0x68, 0x61, 0x6E, 0x20, 0x77, 0x68, 0x61,
    0x74, 0x20, 0x63, 0x61, 0x6E, 0x20, 0x62, 0x65, 0x20, 0x61, 0x6C, 0x6C,
    0x6F, 0x63, 0x74, 0x65, 0x64, 0x20, 0x6F, 0x6E, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x44, 0x53, 0x50, 0x2C, 0x20, 0x74, 0x68, 0x65, 0x20, 0x65, 0x6E,
    0x74, 0x69, 0x72, 0x65, 0x20, 0x50, 0x4F, 0x53, 0x54, 0x20, 0x77, 0x69,
    0x6C, 0x6C, 0x20, 0x66, 0x61, 0x69, 0x6C, 0x2E, 0x29, 0x3C, 0x2F, 0x69,
    0x3E, 0x3C, 0x62, 0x72, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C,
    0x2F, 0x70, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x69, 0x6E,
    0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x73, 0x75,
    0x62, 0x6D, 0x69, 0x74, 0x22, 0x20, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x3D,
    0x22, 0x53, 0x75, 0x62, 0x6D, 0x69, 0x74, 0x20, 0x4D, 0x75, 0x6C, 0x74,
    0x69, 0x70, 0x61, 0x72, 0x74, 0x20, 0x46, 0x6F, 0x72, 0x6D, 0x20, 0x44,
    0x61, 0x74, 0x61, 0x22, 0x3E, 0x20, 0x3C, 0x69, 0x6E, 0x70, 0x75, 0x74,
    0x20, 0x74, 0x79, 0x70, 0x65, 0x3D, 0x22, 0x72, 0x65, 0x73, 0x65, 0x74,
    0x22, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x2F, 0x66, 0x6F, 0x72, 0x6D,
    0x3E, 0x0D, 0x0A, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x68, 0x72, 0x20, 0x57,
    0x49, 0x44, 0x54, 0x48, 0x3D, 0x22, 0x31, 0x30, 0x30, 0x25, 0x22, 0x3E,
    0x0D, 0x0A, 0x0D, 0x0A, 0x3C, 0x2F, 0x62, 0x6F, 0x64, 0x79, 0x3E, 0x0D,
    0x0A, 0x3C, 0x2F, 0x68, 0x74, 0x6D, 0x6C, 0x3E, 0x0D, 0x0A };
