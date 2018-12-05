#include <stdio.h>
#include "fsdata.h"

static const char data_404_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x34, 0x30, 0x34, 0x20, 0x46, 0x69, 0x6c, 0x65, 
0x20, 0x6e, 0x6f, 0x74, 0x20, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x50, 0x61, 0x67, 0x65, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x66, 0x6f, 0x75, 
0x6e, 0x64, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 
0x65, 0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x68, 
0x72, 0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x3c, 
0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 
0x69, 0x64, 0x3d, 0x22, 0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 
0x22, 0x72, 0x65, 0x64, 0x22, 0x3e, 0x50, 0x41, 0x47, 0x45, 0x20, 0x4e, 0x4f, 0x54, 0x20, 0x46, 0x4f, 
0x55, 0x4e, 0x44, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 
0x73, 0x3d, 0x22, 0x69, 0x20, 0x65, 0x22, 0x3e, 0x54, 0x68, 0x65, 0x20, 0x70, 0x61, 0x67, 0x65, 0x20, 
0x79, 0x6f, 0x75, 0x20, 0x77, 0x65, 0x72, 0x65, 0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x69, 0x6e, 0x67, 0x20, 
0x66, 0x6f, 0x72, 0x20, 0x64, 0x6f, 0x65, 0x73, 0x6e, 0x27, 0x74, 0x20, 0x65, 0x78, 0x69, 0x73, 0x74, 
0x21, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x62, 0x6f, 
0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0 };

static const char data_art_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x41, 0x52, 0x54, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x3c, 0x2f, 
0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 0x65, 0x6c, 0x3d, 0x22, 
0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 
0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x3c, 0x2f, 0x68, 0x65, 0x61, 
0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22, 
0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x3e, 0x41, 0x52, 0x54, 0x20, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 
0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x70, 0x3e, 0x59, 0x6f, 0x75, 0x20, 0x61, 0x72, 0x65, 0x20, 0x67, 
0x6f, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x3c, 0x73, 
0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x41, 0x52, 0x54, 0x20, 0x28, 0x41, 0x74, 0x68, 0x65, 0x72, 0x6f, 
0x73, 0x20, 0x52, 0x61, 0x64, 0x69, 0x6f, 0x20, 0x54, 0x65, 0x73, 0x74, 0x29, 0x3c, 0x2f, 0x73, 0x74, 
0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 
0x63, 0x65, 0x2e, 0x3c, 0x62, 0x72, 0x3e, 0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x2c, 0x20, 0x63, 0x68, 
0x6f, 0x6f, 0x73, 0x65, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x79, 0x6f, 
0x75, 0x72, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64, 0x72, 0x69, 
0x76, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x20, 0x3c, 0x73, 0x74, 0x72, 
0x6f, 0x6e, 0x67, 0x3e, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x41, 0x52, 0x54, 0x3c, 0x2f, 0x73, 
0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x20, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x2e, 0x3c, 0x2f, 0x70, 
0x3e, 0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x65, 0x74, 0x68, 0x6f, 0x64, 0x3d, 0x22, 0x70, 0x6f, 
0x73, 0x74, 0x22, 0x20, 0x65, 0x6e, 0x63, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x6d, 0x75, 0x6c, 0x74, 
0x69, 0x70, 0x61, 0x72, 0x74, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x2d, 0x64, 0x61, 0x74, 0x61, 0x22, 0x3e, 
0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x66, 0x69, 0x6c, 0x65, 
0x22, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x61, 0x72, 0x74, 0x22, 0x3e, 0x3c, 0x69, 0x6e, 0x70, 
0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x73, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x22, 0x20, 
0x76, 0x61, 0x6c, 0x75, 0x65, 0x3d, 0x22, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x41, 0x52, 0x54, 
0x22, 0x3e, 0x3c, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 
0x73, 0x73, 0x3d, 0x22, 0x69, 0x20, 0x77, 0x22, 0x3e, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 
0x57, 0x41, 0x52, 0x4e, 0x49, 0x4e, 0x47, 0x53, 0x3c, 0x2f, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 
0x3c, 0x75, 0x6c, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x64, 0x6f, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x70, 0x6f, 
0x77, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 
0x65, 0x20, 0x64, 0x75, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x3c, 0x2f, 
0x6c, 0x69, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x69, 0x66, 0x20, 0x65, 0x76, 0x65, 0x72, 0x79, 0x74, 0x68, 
0x69, 0x6e, 0x67, 0x20, 0x67, 0x6f, 0x65, 0x73, 0x20, 0x77, 0x65, 0x6c, 0x6c, 0x2c, 0x20, 0x74, 0x68, 
0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x72, 0x65, 0x73, 
0x74, 0x61, 0x72, 0x74, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x79, 0x6f, 0x75, 0x20, 
0x63, 0x61, 0x6e, 0x20, 0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x20, 0x77, 0x68, 0x61, 0x74, 0x65, 0x76, 
0x65, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x77, 0x61, 0x6e, 0x74, 0x2c, 0x20, 0x73, 0x6f, 0x20, 0x62, 
0x65, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x74, 0x68, 0x61, 0x74, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x63, 
0x68, 0x6f, 0x6f, 0x73, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x70, 0x65, 0x72, 0x20, 0x41, 0x52, 0x54, 0x20, 
0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x64, 0x65, 
0x76, 0x69, 0x63, 0x65, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 0x2f, 0x75, 0x6c, 0x3e, 0x3c, 0x2f, 0x64, 
0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 
0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0 };

static const char data_fail_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 
0x64, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 0x65, 
0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x68, 0x72, 
0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x3c, 0x2f, 
0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 
0x64, 0x3d, 0x22, 0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 
0x72, 0x65, 0x64, 0x22, 0x3e, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x20, 0x46, 0x41, 0x49, 0x4c, 0x45, 
0x44, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 
0x22, 0x69, 0x20, 0x65, 0x22, 0x3e, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x53, 0x6f, 0x6d, 
0x65, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x77, 0x65, 0x6e, 0x74, 0x20, 0x77, 0x72, 0x6f, 0x6e, 0x67, 
0x20, 0x64, 0x75, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x3c, 0x2f, 0x73, 
0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x50, 0x72, 0x6f, 0x62, 0x61, 0x62, 0x6c, 0x79, 0x20, 0x79, 0x6f, 
0x75, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x63, 0x68, 0x6f, 0x73, 0x65, 0x6e, 0x20, 0x77, 0x72, 0x6f, 
0x6e, 0x67, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x28, 0x74, 0x6f, 0x6f, 0x20, 0x62, 0x69, 0x67, 0x20, 
0x6f, 0x72, 0x20, 0x74, 0x6f, 0x6f, 0x20, 0x73, 0x6d, 0x61, 0x6c, 0x6c, 0x29, 0x20, 0x6f, 0x72, 0x20, 
0x79, 0x6f, 0x75, 0x20, 0x77, 0x65, 0x72, 0x65, 0x20, 0x74, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x74, 
0x6f, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x41, 0x52, 0x54, 0x20, 0x6f, 0x6e, 0x20, 0x64, 
0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x75, 0x6e, 0x6b, 0x6e, 0x6f, 0x77, 
0x6e, 0x20, 0x46, 0x4c, 0x41, 0x53, 0x48, 0x20, 0x74, 0x79, 0x70, 0x65, 0x20, 0x28, 0x61, 0x6e, 0x64, 
0x20, 0x73, 0x69, 0x7a, 0x65, 0x29, 0x20, 0x77, 0x68, 0x69, 0x63, 0x68, 0x20, 0x69, 0x73, 0x20, 0x6e, 
0x6f, 0x74, 0x20, 0x61, 0x6c, 0x6c, 0x6f, 0x77, 0x65, 0x64, 0x2e, 0x20, 0x50, 0x6c, 0x65, 0x61, 0x73, 
0x65, 0x2c, 0x20, 0x74, 0x72, 0x79, 0x20, 0x61, 0x67, 0x61, 0x69, 0x6e, 0x20, 0x6f, 0x72, 0x20, 0x63, 
0x6f, 0x6e, 0x74, 0x61, 0x63, 0x74, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 
0x75, 0x74, 0x68, 0x6f, 0x72, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x6d, 0x6f, 0x64, 
0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x20, 0x59, 0x6f, 0x75, 0x20, 0x63, 0x61, 
0x6e, 0x20, 0x61, 0x6c, 0x73, 0x6f, 0x20, 0x67, 0x65, 0x74, 0x20, 0x6d, 0x6f, 0x72, 0x65, 0x20, 0x69, 
0x6e, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x64, 0x75, 0x72, 0x69, 0x6e, 0x67, 
0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x69, 0x6e, 0x20, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 0x74, 
0x20, 0x63, 0x6f, 0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x2e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 
0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 
0x3e, 0 };

static const char data_flashing_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x69, 0x6e, 0x20, 0x70, 0x72, 
0x6f, 0x67, 0x72, 0x65, 0x73, 0x73, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x73, 0x74, 
0x79, 0x6c, 0x65, 0x3e, 0x68, 0x31, 0x2c, 0x70, 0x2c, 0x75, 0x6c, 0x7b, 0x6d, 0x61, 0x72, 0x67, 0x69, 
0x6e, 0x3a, 0x30, 0x3b, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x30, 0x7d, 0x68, 0x74, 0x6d, 
0x6c, 0x2c, 0x62, 0x6f, 0x64, 0x79, 0x7b, 0x66, 0x6f, 0x6e, 0x74, 0x3a, 0x31, 0x33, 0x70, 0x78, 0x2f, 
0x32, 0x30, 0x70, 0x78, 0x20, 0x41, 0x72, 0x69, 0x61, 0x6c, 0x2c, 0x73, 0x61, 0x6e, 0x73, 0x2d, 0x73, 
0x65, 0x72, 0x69, 0x66, 0x3b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 0x23, 
0x45, 0x44, 0x45, 0x44, 0x45, 0x44, 0x7d, 0x23, 0x6d, 0x7b, 0x6d, 0x61, 0x78, 0x2d, 0x77, 0x69, 0x64, 
0x74, 0x68, 0x3a, 0x37, 0x35, 0x30, 0x70, 0x78, 0x3b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x33, 
0x30, 0x70, 0x78, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x20, 0x31, 0x30, 0x70, 0x78, 0x3b, 0x62, 0x6f, 0x72, 
0x64, 0x65, 0x72, 0x3a, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x42, 0x41, 
0x42, 0x41, 0x42, 0x41, 0x3b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 0x23, 
0x46, 0x46, 0x46, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 
0x3a, 0x37, 0x70, 0x78, 0x3b, 0x62, 0x6f, 0x78, 0x2d, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x3a, 0x30, 
0x20, 0x30, 0x20, 0x31, 0x30, 0x70, 0x78, 0x20, 0x23, 0x44, 0x32, 0x44, 0x31, 0x44, 0x31, 0x7d, 0x23, 
0x6d, 0x20, 0x3e, 0x20, 0x2a, 0x7b, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x32, 0x30, 0x70, 
0x78, 0x7d, 0x68, 0x31, 0x7b, 0x66, 0x6f, 0x6e, 0x74, 0x3a, 0x62, 0x6f, 0x6c, 0x64, 0x20, 0x35, 0x30, 
0x70, 0x78, 0x2f, 0x35, 0x30, 0x70, 0x78, 0x20, 0x54, 0x61, 0x68, 0x6f, 0x6d, 0x61, 0x3b, 0x62, 0x6f, 
0x72, 0x64, 0x65, 0x72, 0x2d, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x73, 0x6f, 0x6c, 0x69, 0x64, 
0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x45, 0x38, 0x45, 0x38, 0x45, 0x38, 0x7d, 0x61, 0x2c, 0x68, 0x31, 
0x7b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x23, 0x32, 0x34, 0x35, 0x30, 0x41, 0x44, 0x3b, 0x74, 0x65, 
0x78, 0x74, 0x2d, 0x64, 0x65, 0x63, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6e, 0x6f, 0x6e, 
0x65, 0x7d, 0x2e, 0x69, 0x7b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x32, 0x30, 0x70, 0x78, 0x3b, 
0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 0x3a, 0x37, 0x70, 0x78, 
0x3b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x6a, 0x75, 0x73, 0x74, 0x69, 
0x66, 0x79, 0x7d, 0x2e, 0x77, 0x7b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 
0x23, 0x46, 0x45, 0x46, 0x44, 0x43, 0x45, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 0x73, 0x6f, 
0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x46, 0x46, 0x43, 0x36, 0x34, 0x33, 0x7d, 0x23, 
0x66, 0x7b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x63, 0x65, 0x6e, 0x74, 
0x65, 0x72, 0x3b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x23, 0x39, 0x36, 0x39, 0x33, 0x39, 0x33, 0x7d, 
0x66, 0x6f, 0x72, 0x6d, 0x2c, 0x70, 0x2c, 0x68, 0x31, 0x7b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 
0x69, 0x67, 0x6e, 0x3a, 0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x7d, 0x75, 0x6c, 0x7b, 0x6c, 0x69, 0x73, 
0x74, 0x2d, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x3a, 0x73, 0x71, 0x75, 0x61, 0x72, 0x65, 0x3b, 0x6d, 0x61, 
0x72, 0x67, 0x69, 0x6e, 0x3a, 0x30, 0x20, 0x30, 0x20, 0x30, 0x20, 0x32, 0x30, 0x70, 0x78, 0x7d, 0x2e, 
0x69, 0x20, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x7b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x30, 
0x20, 0x30, 0x20, 0x35, 0x70, 0x78, 0x3b, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x3a, 0x62, 0x6c, 
0x6f, 0x63, 0x6b, 0x7d, 0x23, 0x6c, 0x7b, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x33, 0x30, 0x70, 
0x78, 0x3b, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3a, 0x33, 0x30, 0x70, 0x78, 0x3b, 0x6d, 0x61, 0x72, 0x67, 
0x69, 0x6e, 0x3a, 0x30, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x20, 0x32, 0x30, 0x70, 0x78, 0x3b, 0x2d, 0x77, 
0x65, 0x62, 0x6b, 0x69, 0x74, 0x2d, 0x61, 0x6e, 0x69, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x72, 
0x20, 0x31, 0x73, 0x20, 0x69, 0x6e, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x65, 0x20, 0x6c, 0x69, 0x6e, 0x65, 
0x61, 0x72, 0x3b, 0x2d, 0x6d, 0x6f, 0x7a, 0x2d, 0x61, 0x6e, 0x69, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 
0x3a, 0x72, 0x20, 0x31, 0x73, 0x20, 0x69, 0x6e, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x65, 0x20, 0x6c, 0x69, 
0x6e, 0x65, 0x61, 0x72, 0x3b, 0x2d, 0x6f, 0x2d, 0x61, 0x6e, 0x69, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 
0x3a, 0x72, 0x20, 0x31, 0x73, 0x20, 0x69, 0x6e, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x65, 0x20, 0x6c, 0x69, 
0x6e, 0x65, 0x61, 0x72, 0x3b, 0x61, 0x6e, 0x69, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x72, 0x20, 
0x31, 0x73, 0x20, 0x69, 0x6e, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x65, 0x20, 0x6c, 0x69, 0x6e, 0x65, 0x61, 
0x72, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x3a, 0x37, 0x70, 0x78, 
0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x23, 0x45, 0x41, 0x46, 0x31, 0x46, 0x46, 0x3b, 0x62, 0x6f, 
0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 0x3a, 0x37, 0x70, 0x78, 0x20, 0x73, 0x6f, 
0x6c, 0x69, 0x64, 0x20, 0x23, 0x45, 0x41, 0x46, 0x31, 0x46, 0x46, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 
0x72, 0x2d, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x3a, 0x37, 0x70, 0x78, 0x20, 0x73, 0x6f, 0x6c, 0x69, 
0x64, 0x20, 0x23, 0x45, 0x41, 0x46, 0x31, 0x46, 0x46, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 
0x74, 0x6f, 0x70, 0x3a, 0x37, 0x70, 0x78, 0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x23, 0x32, 0x34, 
0x35, 0x30, 0x41, 0x44, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 
0x73, 0x3a, 0x31, 0x30, 0x30, 0x25, 0x7d, 0x40, 0x2d, 0x77, 0x65, 0x62, 0x6b, 0x69, 0x74, 0x2d, 0x6b, 
0x65, 0x79, 0x66, 0x72, 0x61, 0x6d, 0x65, 0x73, 0x20, 0x72, 0x7b, 0x66, 0x72, 0x6f, 0x6d, 0x7b, 0x2d, 
0x77, 0x65, 0x62, 0x6b, 0x69, 0x74, 0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 
0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x30, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x74, 0x6f, 0x7b, 0x2d, 
0x77, 0x65, 0x62, 0x6b, 0x69, 0x74, 0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 
0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x33, 0x35, 0x39, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x7d, 0x40, 
0x2d, 0x6d, 0x6f, 0x7a, 0x2d, 0x6b, 0x65, 0x79, 0x66, 0x72, 0x61, 0x6d, 0x65, 0x73, 0x20, 0x72, 0x7b, 
0x66, 0x72, 0x6f, 0x6d, 0x7b, 0x2d, 0x6d, 0x6f, 0x7a, 0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 
0x72, 0x6d, 0x3a, 0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x30, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x74, 
0x6f, 0x7b, 0x2d, 0x6d, 0x6f, 0x7a, 0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 
0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x33, 0x35, 0x39, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x7d, 0x40, 
0x2d, 0x6f, 0x2d, 0x6b, 0x65, 0x79, 0x66, 0x72, 0x61, 0x6d, 0x65, 0x73, 0x20, 0x72, 0x7b, 0x66, 0x72, 
0x6f, 0x6d, 0x7b, 0x2d, 0x6f, 0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 0x72, 
0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x30, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x74, 0x6f, 0x7b, 0x2d, 0x6f, 
0x2d, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 
0x28, 0x33, 0x35, 0x39, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x7d, 0x40, 0x6b, 0x65, 0x79, 0x66, 0x72, 0x61, 
0x6d, 0x65, 0x73, 0x20, 0x72, 0x7b, 0x66, 0x72, 0x6f, 0x6d, 0x7b, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 
0x6f, 0x72, 0x6d, 0x3a, 0x72, 0x6f, 0x74, 0x61, 0x74, 0x65, 0x28, 0x30, 0x64, 0x65, 0x67, 0x29, 0x7d, 
0x74, 0x6f, 0x7b, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x3a, 0x72, 0x6f, 0x74, 0x61, 
0x74, 0x65, 0x28, 0x33, 0x35, 0x39, 0x64, 0x65, 0x67, 0x29, 0x7d, 0x7d, 0x3c, 0x2f, 0x73, 0x74, 0x79, 
0x6c, 0x65, 0x3e, 0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 
0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22, 0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x3e, 0x55, 0x50, 
0x44, 0x41, 0x54, 0x45, 0x20, 0x49, 0x4e, 0x20, 0x50, 0x52, 0x4f, 0x47, 0x52, 0x45, 0x53, 0x53, 0x3c, 
0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x70, 0x3e, 0x59, 0x6f, 0x75, 0x72, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 
0x77, 0x61, 0x73, 0x20, 0x73, 0x75, 0x63, 0x63, 0x65, 0x73, 0x73, 0x66, 0x75, 0x6c, 0x6c, 0x79, 0x20, 
0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 0x65, 0x64, 0x21, 0x20, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 
0x69, 0x73, 0x20, 0x69, 0x6e, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61, 0x6e, 
0x64, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x73, 0x68, 0x6f, 0x75, 0x6c, 0x64, 0x20, 0x77, 0x61, 0x69, 0x74, 
0x20, 0x66, 0x6f, 0x72, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x6d, 0x61, 0x74, 0x69, 0x63, 0x20, 0x72, 0x65, 
0x73, 0x65, 0x74, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 
0x2e, 0x3c, 0x62, 0x72, 0x3e, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x74, 0x69, 0x6d, 0x65, 0x20, 
0x64, 0x65, 0x70, 0x65, 0x6e, 0x64, 0x73, 0x20, 0x6f, 0x6e, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 
0x73, 0x69, 0x7a, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x6d, 0x61, 0x79, 0x20, 0x74, 0x61, 0x6b, 0x65, 
0x20, 0x75, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x20, 0x66, 0x65, 0x77, 0x20, 0x6d, 0x69, 0x6e, 0x75, 
0x74, 0x65, 0x73, 0x2e, 0x20, 0x59, 0x6f, 0x75, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x63, 0x6c, 0x6f, 0x73, 
0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x70, 0x61, 0x67, 0x65, 0x2e, 0x3c, 0x2f, 0x70, 0x3e, 0x3c, 
0x64, 0x69, 0x76, 0x20, 0x69, 0x64, 0x3d, 0x22, 0x6c, 0x22, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 
0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 
0x6d, 0x6c, 0x3e, 0 };

static const char data_index_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x46, 0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x20, 0x75, 0x70, 0x64, 
0x61, 0x74, 0x65, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 
0x72, 0x65, 0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 
0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 
0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x64, 0x69, 0x76, 
0x20, 0x69, 0x64, 0x3d, 0x22, 0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x3e, 0x46, 0x49, 0x52, 0x4d, 0x57, 
0x41, 0x52, 0x45, 0x20, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x70, 
0x3e, 0x59, 0x6f, 0x75, 0x20, 0x61, 0x72, 0x65, 0x20, 0x67, 0x6f, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 
0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x66, 
0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x3c, 0x2f, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x20, 
0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x2e, 0x3c, 0x62, 0x72, 
0x3e, 0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x2c, 0x20, 0x63, 0x68, 0x6f, 0x6f, 0x73, 0x65, 0x20, 0x66, 
0x69, 0x6c, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x6c, 0x6f, 0x63, 
0x61, 0x6c, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20, 0x61, 0x6e, 0x64, 
0x20, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x20, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x55, 0x70, 
0x64, 0x61, 0x74, 0x65, 0x20, 0x66, 0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x3c, 0x2f, 0x73, 0x74, 
0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x20, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x2e, 0x3c, 0x2f, 0x70, 0x3e, 
0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x65, 0x74, 0x68, 0x6f, 0x64, 0x3d, 0x22, 0x70, 0x6f, 0x73, 
0x74, 0x22, 0x20, 0x65, 0x6e, 0x63, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x6d, 0x75, 0x6c, 0x74, 0x69, 
0x70, 0x61, 0x72, 0x74, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x2d, 0x64, 0x61, 0x74, 0x61, 0x22, 0x3e, 0x3c, 
0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x66, 0x69, 0x6c, 0x65, 0x22, 
0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x66, 0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x22, 0x3e, 
0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x73, 0x75, 0x62, 0x6d, 
0x69, 0x74, 0x22, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x3d, 0x22, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 
0x20, 0x66, 0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x22, 0x3e, 0x3c, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 
0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x69, 0x20, 0x77, 0x22, 
0x3e, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x57, 0x41, 0x52, 0x4e, 0x49, 0x4e, 0x47, 0x53, 
0x3c, 0x2f, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x3c, 0x75, 0x6c, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 
0x64, 0x6f, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x66, 0x20, 
0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x64, 0x75, 0x72, 0x69, 0x6e, 0x67, 
0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 0x65, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x69, 
0x66, 0x20, 0x65, 0x76, 0x65, 0x72, 0x79, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x67, 0x6f, 0x65, 0x73, 
0x20, 0x77, 0x65, 0x6c, 0x6c, 0x2c, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 
0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x72, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x3c, 0x2f, 0x6c, 0x69, 
0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x79, 0x6f, 0x75, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x75, 0x70, 0x6c, 0x6f, 
0x61, 0x64, 0x20, 0x77, 0x68, 0x61, 0x74, 0x65, 0x76, 0x65, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x77, 
0x61, 0x6e, 0x74, 0x2c, 0x20, 0x73, 0x6f, 0x20, 0x62, 0x65, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x74, 
0x68, 0x61, 0x74, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x63, 0x68, 0x6f, 0x6f, 0x73, 0x65, 0x20, 0x70, 0x72, 
0x6f, 0x70, 0x65, 0x72, 0x20, 0x66, 0x69, 0x72, 0x6d, 0x77, 0x61, 0x72, 0x65, 0x20, 0x69, 0x6d, 0x61, 
0x67, 0x65, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 
0x65, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 0x2f, 0x75, 0x6c, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 
0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 
0x6d, 0x6c, 0x3e, 0 };

static const char data_style_css[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x63, 0x73, 0x73, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 0x54, 
0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x68, 0x31, 0x2c, 0x70, 0x2c, 0x66, 0x6f, 0x72, 0x6d, 0x2c, 0x75, 0x6c, 0x20, 0x7b, 0x6d, 0x61, 0x72, 
0x67, 0x69, 0x6e, 0x3a, 0x20, 0x30, 0x3b, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 0x30, 
0x3b, 0x7d, 0x68, 0x74, 0x6d, 0x6c, 0x2c, 0x62, 0x6f, 0x64, 0x79, 0x20, 0x7b, 0x66, 0x6f, 0x6e, 0x74, 
0x3a, 0x20, 0x31, 0x33, 0x70, 0x78, 0x2f, 0x32, 0x30, 0x70, 0x78, 0x20, 0x41, 0x72, 0x69, 0x61, 0x6c, 
0x2c, 0x20, 0x73, 0x61, 0x6e, 0x73, 0x2d, 0x73, 0x65, 0x72, 0x69, 0x66, 0x3b, 0x62, 0x61, 0x63, 0x6b, 
0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 0x20, 0x23, 0x45, 0x44, 0x45, 0x44, 0x45, 0x44, 0x3b, 0x7d, 
0x23, 0x6d, 0x20, 0x7b, 0x6d, 0x61, 0x78, 0x2d, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3a, 0x20, 0x37, 0x35, 
0x30, 0x70, 0x78, 0x3b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x33, 0x30, 0x70, 0x78, 0x20, 
0x61, 0x75, 0x74, 0x6f, 0x20, 0x31, 0x30, 0x70, 0x78, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 
0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x42, 0x41, 0x42, 0x41, 0x42, 
0x41, 0x3b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x3a, 0x20, 0x23, 0x46, 0x46, 
0x46, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 0x3a, 0x20, 
0x37, 0x70, 0x78, 0x3b, 0x62, 0x6f, 0x78, 0x2d, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x3a, 0x20, 0x30, 
0x20, 0x30, 0x20, 0x31, 0x30, 0x70, 0x78, 0x20, 0x23, 0x44, 0x32, 0x44, 0x31, 0x44, 0x31, 0x3b, 0x7d, 
0x23, 0x6d, 0x20, 0x3e, 0x20, 0x2a, 0x20, 0x7b, 0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x20, 
0x32, 0x30, 0x70, 0x78, 0x3b, 0x7d, 0x68, 0x31, 0x20, 0x7b, 0x66, 0x6f, 0x6e, 0x74, 0x3a, 0x20, 0x62, 
0x6f, 0x6c, 0x64, 0x20, 0x35, 0x30, 0x70, 0x78, 0x2f, 0x35, 0x30, 0x70, 0x78, 0x20, 0x54, 0x61, 0x68, 
0x6f, 0x6d, 0x61, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x2d, 0x62, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 
0x3a, 0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x45, 0x38, 0x45, 0x38, 
0x45, 0x38, 0x3b, 0x7d, 0x61, 0x2c, 0x68, 0x31, 0x20, 0x7b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 
0x23, 0x32, 0x34, 0x35, 0x30, 0x41, 0x44, 0x3b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x64, 0x65, 0x63, 0x6f, 
0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x6e, 0x6f, 0x6e, 0x65, 0x3b, 0x7d, 0x2e, 0x69, 0x20, 
0x7b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x32, 0x30, 0x70, 0x78, 0x3b, 0x62, 0x6f, 0x72, 
0x64, 0x65, 0x72, 0x2d, 0x72, 0x61, 0x64, 0x69, 0x75, 0x73, 0x3a, 0x20, 0x37, 0x70, 0x78, 0x3b, 0x74, 
0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 0x6a, 0x75, 0x73, 0x74, 0x69, 0x66, 
0x79, 0x3b, 0x7d, 0x2e, 0x77, 0x20, 0x7b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 
0x3a, 0x20, 0x23, 0x46, 0x45, 0x46, 0x44, 0x43, 0x45, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 
0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x46, 0x46, 0x43, 0x36, 0x34, 
0x33, 0x3b, 0x7d, 0x2e, 0x65, 0x20, 0x7b, 0x62, 0x61, 0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 
0x3a, 0x20, 0x23, 0x46, 0x46, 0x45, 0x37, 0x45, 0x37, 0x3b, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 
0x73, 0x6f, 0x6c, 0x69, 0x64, 0x20, 0x31, 0x70, 0x78, 0x20, 0x23, 0x46, 0x45, 0x37, 0x31, 0x37, 0x31, 
0x3b, 0x7d, 0x23, 0x66, 0x20, 0x7b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 
0x20, 0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x39, 
0x36, 0x39, 0x33, 0x39, 0x33, 0x3b, 0x7d, 0x66, 0x6f, 0x72, 0x6d, 0x2c, 0x70, 0x2c, 0x68, 0x31, 0x20, 
0x7b, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 0x63, 0x65, 0x6e, 0x74, 
0x65, 0x72, 0x3b, 0x7d, 0x75, 0x6c, 0x20, 0x7b, 0x6c, 0x69, 0x73, 0x74, 0x2d, 0x73, 0x74, 0x79, 0x6c, 
0x65, 0x3a, 0x20, 0x73, 0x71, 0x75, 0x61, 0x72, 0x65, 0x3b, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 
0x20, 0x30, 0x20, 0x30, 0x20, 0x30, 0x20, 0x32, 0x30, 0x70, 0x78, 0x3b, 0x7d, 0x2e, 0x72, 0x65, 0x64, 
0x20, 0x7b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x45, 0x34, 0x31, 0x36, 0x31, 0x36, 0x3b, 
0x7d, 0x2e, 0x69, 0x20, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x20, 0x7b, 0x6d, 0x61, 0x72, 0x67, 0x69, 
0x6e, 0x3a, 0x20, 0x30, 0x20, 0x30, 0x20, 0x35, 0x70, 0x78, 0x3b, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 
0x79, 0x3a, 0x20, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x3b, 0x7d, 0 };

static const char data_uboot_html[] = {
/* HTTP Header */
0x48, 0x54, 0x54, 0x50, 0x2f, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x30, 0x30, 0x20, 0x4f, 0x4b, 0x0d, 0x0a,
0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x3a, 0x20, 0x75, 0x49, 0x50, 0x2f, 0x30, 0x2e, 0x39, 0x0d, 0x0a,
0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a, 0x20, 0x74, 0x65, 0x78, 
0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 
0x54, 0x46, 0x2d, 0x38, 0x0d, 0x0a, 0x0d, 0x0a,
/* Page/File content */
0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x68, 
0x74, 0x6d, 0x6c, 0x3e, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x20, 0x63, 
0x68, 0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x22, 0x75, 0x74, 0x66, 0x2d, 0x38, 0x22, 0x3e, 0x3c, 0x74, 
0x69, 0x74, 0x6c, 0x65, 0x3e, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 0x74, 0x20, 0x75, 0x70, 0x64, 0x61, 0x74, 
0x65, 0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 0x65, 
0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x68, 0x72, 
0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x3c, 0x2f, 
0x68, 0x65, 0x61, 0x64, 0x3e, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x69, 
0x64, 0x3d, 0x22, 0x6d, 0x22, 0x3e, 0x3c, 0x68, 0x31, 0x3e, 0x55, 0x2d, 0x42, 0x4f, 0x4f, 0x54, 0x20, 
0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x70, 0x3e, 0x59, 0x6f, 0x75, 
0x20, 0x61, 0x72, 0x65, 0x20, 0x67, 0x6f, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x75, 0x70, 0x64, 
0x61, 0x74, 0x65, 0x20, 0x3c, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 
0x74, 0x20, 0x62, 0x6f, 0x6f, 0x74, 0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x3c, 0x2f, 0x73, 0x74, 0x72, 
0x6f, 0x6e, 0x67, 0x3e, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 
0x65, 0x2e, 0x3c, 0x62, 0x72, 0x3e, 0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x2c, 0x20, 0x63, 0x68, 0x6f, 
0x6f, 0x73, 0x65, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x79, 0x6f, 0x75, 
0x72, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64, 0x72, 0x69, 0x76, 
0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x20, 0x3c, 0x73, 0x74, 0x72, 0x6f, 
0x6e, 0x67, 0x3e, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 0x74, 0x3c, 
0x2f, 0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x20, 0x62, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x2e, 0x3c, 
0x2f, 0x70, 0x3e, 0x3c, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x65, 0x74, 0x68, 0x6f, 0x64, 0x3d, 0x22, 
0x70, 0x6f, 0x73, 0x74, 0x22, 0x20, 0x65, 0x6e, 0x63, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x6d, 0x75, 
0x6c, 0x74, 0x69, 0x70, 0x61, 0x72, 0x74, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x2d, 0x64, 0x61, 0x74, 0x61, 
0x22, 0x3e, 0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x66, 0x69, 
0x6c, 0x65, 0x22, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x75, 0x62, 0x6f, 0x6f, 0x74, 0x22, 0x3e, 
0x3c, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 0x73, 0x75, 0x62, 0x6d, 
0x69, 0x74, 0x22, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x3d, 0x22, 0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 
0x20, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 0x74, 0x22, 0x3e, 0x3c, 0x2f, 0x66, 0x6f, 0x72, 0x6d, 0x3e, 0x3c, 
0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x69, 0x20, 0x77, 0x22, 0x3e, 0x3c, 
0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x57, 0x41, 0x52, 0x4e, 0x49, 0x4e, 0x47, 0x53, 0x3c, 0x2f, 
0x73, 0x74, 0x72, 0x6f, 0x6e, 0x67, 0x3e, 0x3c, 0x75, 0x6c, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x64, 0x6f, 
0x20, 0x6e, 0x6f, 0x74, 0x20, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x66, 0x20, 0x74, 0x68, 
0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x64, 0x75, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x75, 
0x70, 0x64, 0x61, 0x74, 0x65, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x69, 0x66, 0x20, 
0x65, 0x76, 0x65, 0x72, 0x79, 0x74, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x67, 0x6f, 0x65, 0x73, 0x20, 0x77, 
0x65, 0x6c, 0x6c, 0x2c, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x77, 
0x69, 0x6c, 0x6c, 0x20, 0x72, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 
0x6c, 0x69, 0x3e, 0x79, 0x6f, 0x75, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x75, 0x70, 0x6c, 0x6f, 0x61, 0x64, 
0x20, 0x77, 0x68, 0x61, 0x74, 0x65, 0x76, 0x65, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x77, 0x61, 0x6e, 
0x74, 0x2c, 0x20, 0x73, 0x6f, 0x20, 0x62, 0x65, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x74, 0x68, 0x61, 
0x74, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x63, 0x68, 0x6f, 0x6f, 0x73, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x70, 
0x65, 0x72, 0x20, 0x55, 0x2d, 0x42, 0x6f, 0x6f, 0x74, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x66, 
0x6f, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x3c, 0x2f, 0x6c, 
0x69, 0x3e, 0x3c, 0x6c, 0x69, 0x3e, 0x75, 0x70, 0x64, 0x61, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x55, 0x2d, 
0x42, 0x6f, 0x6f, 0x74, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x76, 0x65, 0x72, 0x79, 0x20, 0x64, 0x61, 
0x6e, 0x67, 0x65, 0x72, 0x6f, 0x75, 0x73, 0x20, 0x6f, 0x70, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 
0x20, 0x61, 0x6e, 0x64, 0x20, 0x6d, 0x61, 0x79, 0x20, 0x64, 0x61, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x79, 
0x6f, 0x75, 0x72, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x21, 0x3c, 0x2f, 0x6c, 0x69, 0x3e, 0x3c, 
0x2f, 0x75, 0x6c, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0x3c, 
0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0 };

const struct fsdata_file file_404_html[] = {{
	NULL,
	"/404.html",
	data_404_html,
	(int)sizeof(data_404_html) - 1
}};

const struct fsdata_file file_art_html[] = {{
	file_404_html,
	"/art.html",
	data_art_html,
	(int)sizeof(data_art_html) - 1
}};

const struct fsdata_file file_fail_html[] = {{
	file_art_html,
	"/fail.html",
	data_fail_html,
	(int)sizeof(data_fail_html) - 1
}};

const struct fsdata_file file_flashing_html[] = {{
	file_fail_html,
	"/flashing.html",
	data_flashing_html,
	(int)sizeof(data_flashing_html) - 1
}};

const struct fsdata_file file_index_html[] = {{
	file_flashing_html,
	"/index.html",
	data_index_html,
	(int)sizeof(data_index_html) - 1
}};

const struct fsdata_file file_style_css[] = {{
	file_index_html,
	"/style.css",
	data_style_css,
	(int)sizeof(data_style_css) - 1
}};

const struct fsdata_file file_uboot_html[] = {{
	file_style_css,
	"/uboot.html",
	data_uboot_html,
	(int)sizeof(data_uboot_html) - 1
}};

#define FS_ROOT file_uboot_html
#define FS_NUMFILES 7
