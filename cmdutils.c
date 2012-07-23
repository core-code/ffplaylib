/*
 * Various utilities for command line tools
 * Copyright (c) 2000-2003 Fabrice Bellard
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

/* Include only the enabled headers since some compilers (namely, Sun
   Studio) will not omit unused inline functions and create undefined
   references to libraries that are not being built. */

#define FFMPEG_CONFIG_H
#define FFMPEG_CONFIGURATION "--prefix=/Users/julian/Desktop/bla"
#define FFMPEG_LICENSE "LGPL version 2.1 or later"
#define FFMPEG_DATADIR "/Users/julian/Desktop/bla/share/ffmpeg"
#define CC_TYPE "llvm_gcc"
#define CC_VERSION __VERSION__
#define restrict restrict
#define EXTERN_PREFIX "_"
#define EXTERN_ASM _
#define SLIBSUF ".dylib"
#define ARCH_ALPHA 0
#define ARCH_ARM 0
#define ARCH_AVR32 0
#define ARCH_AVR32_AP 0
#define ARCH_AVR32_UC 0
#define ARCH_BFIN 0
#define ARCH_IA64 0
#define ARCH_M68K 0
#define ARCH_MIPS 0
#define ARCH_MIPS64 0
#define ARCH_PARISC 0
#define ARCH_PPC 0
#define ARCH_PPC64 0
#define ARCH_S390 0
#define ARCH_SH4 0
#define ARCH_SPARC 0
#define ARCH_SPARC64 0
#define ARCH_TOMI 0
#define ARCH_X86 1
#define ARCH_X86_32 0
#define ARCH_X86_64 1
#define HAVE_ALTIVEC 0
#define HAVE_AMD3DNOW 1
#define HAVE_AMD3DNOWEXT 1
#define HAVE_ARMV5TE 0
#define HAVE_ARMV6 0
#define HAVE_ARMV6T2 0
#define HAVE_ARMVFP 0
#define HAVE_AVX 1
#define HAVE_IWMMXT 0
#define HAVE_MMI 0
#define HAVE_MMX 1
#define HAVE_MMX2 1
#define HAVE_NEON 0
#define HAVE_PPC4XX 0
#define HAVE_SSE 1
#define HAVE_SSSE3 1
#define HAVE_VFPV3 0
#define HAVE_VIS 0
#define HAVE_BIGENDIAN 0
#define HAVE_FAST_UNALIGNED 1
#define HAVE_PTHREADS 1
#define HAVE_W32THREADS 0
#define HAVE_ALIGNED_STACK 1
#define HAVE_ALSA_ASOUNDLIB_H 0
#define HAVE_ALTIVEC_H 0
#define HAVE_ARPA_INET_H 1
#define HAVE_ATTRIBUTE_MAY_ALIAS 1
#define HAVE_ATTRIBUTE_PACKED 1
#define HAVE_BSWAP 1
#define HAVE_CLOSESOCKET 0
#define HAVE_CMOV 1
#define HAVE_DCBZL 0
#define HAVE_DEV_BKTR_IOCTL_BT848_H 0
#define HAVE_DEV_BKTR_IOCTL_METEOR_H 0
#define HAVE_DEV_IC_BT8XX_H 0
#define HAVE_DEV_VIDEO_METEOR_IOCTL_METEOR_H 0
#define HAVE_DEV_VIDEO_BKTR_IOCTL_BT848_H 0
#define HAVE_DLFCN_H 1
#define HAVE_DLOPEN 1
#define HAVE_DOS_PATHS 0
#define HAVE_EBP_AVAILABLE 1
#define HAVE_EBX_AVAILABLE 1
#define HAVE_EXP2 1
#define HAVE_EXP2F 1
#define HAVE_FAST_64BIT 1
#define HAVE_FAST_CLZ 1
#define HAVE_FAST_CMOV 1
#define HAVE_FCNTL 1
#define HAVE_FORK 1
#define HAVE_GETADDRINFO 1
#define HAVE_GETHRTIME 0
#define HAVE_GETPROCESSMEMORYINFO 0
#define HAVE_GETPROCESSTIMES 0
#define HAVE_GETRUSAGE 1
#define HAVE_GNU_AS 0
#define HAVE_STRUCT_RUSAGE_RU_MAXRSS 1
#define HAVE_IBM_ASM 0
#define HAVE_INET_ATON 1
#define HAVE_INLINE_ASM 1
#define HAVE_ISATTY 1
#define HAVE_KBHIT 0
#define HAVE_LDBRX 0
#define HAVE_LLRINT 1
#define HAVE_LLRINTF 1
#define HAVE_LOCAL_ALIGNED_16 1
#define HAVE_LOCAL_ALIGNED_8 1
#define HAVE_LOCALTIME_R 1
#define HAVE_LOG2 1
#define HAVE_LOG2F 1
#define HAVE_LOONGSON 0
#define HAVE_LRINT 1
#define HAVE_LRINTF 1
#define HAVE_LZO1X_999_COMPRESS 0
#define HAVE_MACHINE_IOCTL_BT848_H 0
#define HAVE_MACHINE_IOCTL_METEOR_H 0
#define HAVE_MAPVIEWOFFILE 0
#define HAVE_MEMALIGN 0
#define HAVE_MKSTEMP 1
#define HAVE_MMAP 1
#define HAVE_PLD 0
#define HAVE_POSIX_MEMALIGN 1
#define HAVE_ROUND 1
#define HAVE_ROUNDF 1
#define HAVE_SDL 1
#define HAVE_SDL_VIDEO_SIZE 1
#define HAVE_SETMODE 0
#define HAVE_SNDIO_H 0
#define HAVE_SOCKLEN_T 1
#define HAVE_SOUNDCARD_H 0
#define HAVE_POLL_H 1
#ifdef __APPLE__
#define HAVE_SETRLIMIT 1
#endif
#define HAVE_STRERROR_R 1
#define HAVE_STRTOK_R 1
#define HAVE_STRUCT_ADDRINFO 1
#define HAVE_STRUCT_IPV6_MREQ 1
#define HAVE_STRUCT_SOCKADDR_IN6 1
#define HAVE_STRUCT_SOCKADDR_SA_LEN 1
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#define HAVE_SYMVER 0
#define HAVE_SYMVER_GNU_ASM 0
#define HAVE_SYMVER_ASM_LABEL 0
#define HAVE_SYS_MMAN_H 1
#define HAVE_SYS_RESOURCE_H 0
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOUNDCARD_H 0
#define HAVE_SYS_VIDEOIO_H 0
#define HAVE_TEN_OPERANDS 1
#define HAVE_TERMIOS_H 1
#define HAVE_THREADS 1
#define HAVE_TRUNC 1
#define HAVE_TRUNCF 1
#define HAVE_VFP_ARGS 0
#define HAVE_VIRTUALALLOC 0
#define HAVE_WINSOCK2_H 0
#define HAVE_XFORM_ASM 0
#define HAVE_XMM_CLOBBERS 1
#define HAVE_YASM 1
#define CONFIG_BSFS 1
#define CONFIG_DECODERS 1
#define CONFIG_DEMUXERS 1
#define CONFIG_ENCODERS 1
#define CONFIG_FILTERS 1
#define CONFIG_HWACCELS 0
#define CONFIG_INDEVS 0
#define CONFIG_MUXERS 1
#define CONFIG_OUTDEVS 1
#define CONFIG_PARSERS 1
#define CONFIG_PROTOCOLS 1
#define CONFIG_AANDCT 1
#define CONFIG_AC3DSP 1
#define CONFIG_AVCODEC 1
#define CONFIG_AVDEVICE 0
#define CONFIG_AVFILTER 0
#define CONFIG_AVFORMAT 1
#define CONFIG_AVISYNTH 0
#define CONFIG_BZLIB 1
#define CONFIG_CRYSTALHD 0
#define CONFIG_DCT 1
#define CONFIG_DOC 1
#define CONFIG_DWT 1
#define CONFIG_DXVA2 0
#define CONFIG_FASTDIV 1
#define CONFIG_FFMPEG 1
#define CONFIG_FFPLAY 1
#define CONFIG_FFPROBE 1
#define CONFIG_FFSERVER 1
#define CONFIG_FFT 1
#define CONFIG_FREI0R 0
#define CONFIG_GOLOMB 1
#define CONFIG_GPL 0
#define CONFIG_GRAY 0
#define CONFIG_H264DSP 1
#define CONFIG_H264PRED 1
#define CONFIG_HARDCODED_TABLES 0
#define CONFIG_HUFFMAN 1
#define CONFIG_LIBCELT 0
#define CONFIG_LIBDC1394 0
#define CONFIG_LIBDIRAC 0
#define CONFIG_LIBFAAC 0
#define CONFIG_LIBFREETYPE 0
#define CONFIG_LIBGSM 0
#define CONFIG_LIBMP3LAME 0
#define CONFIG_LIBNUT 0
#define CONFIG_LIBOPENCORE_AMRNB 0
#define CONFIG_LIBOPENCORE_AMRWB 0
#define CONFIG_LIBOPENCV 0
#define CONFIG_LIBOPENJPEG 0
#define CONFIG_LIBRTMP 0
#define CONFIG_LIBSCHROEDINGER 0
#define CONFIG_LIBSPEEX 0
#define CONFIG_LIBTHEORA 0
#define CONFIG_LIBVO_AACENC 0
#define CONFIG_LIBVO_AMRWBENC 0
#define CONFIG_LIBVORBIS 0
#define CONFIG_LIBVPX 0
#define CONFIG_LIBX264 0
#define CONFIG_LIBXAVS 0
#define CONFIG_LIBXVID 0
#define CONFIG_LPC 1
#define CONFIG_LSP 1
#define CONFIG_MDCT 1
#define CONFIG_MEMALIGN_HACK 0
#define CONFIG_MLIB 0
#define CONFIG_MPEGAUDIODSP 1
#define CONFIG_NETWORK 0
#define CONFIG_NONFREE 0
#define CONFIG_PIC 1
#define CONFIG_POSTPROC 0
#define CONFIG_RDFT 1
#define CONFIG_RTPDEC 1
#define CONFIG_RUNTIME_CPUDETECT 0
#define CONFIG_SHARED 0
#define CONFIG_SINEWIN 1
#define CONFIG_SMALL 0
#define CONFIG_SRAM 0
#define CONFIG_STATIC 1
#define CONFIG_SWSCALE 1
#define CONFIG_SWSCALE_ALPHA 1
#define CONFIG_VAAPI 0
#define CONFIG_VDPAU 0
#define CONFIG_VERSION3 0
#define CONFIG_X11GRAB 0
#define CONFIG_ZLIB 1
#define CONFIG_AVUTIL 1
#define CONFIG_GPLV3 0
#define CONFIG_LGPLV3 0
#define CONFIG_AASC_DECODER 1
#define CONFIG_AMV_DECODER 1
#define CONFIG_ANM_DECODER 1
#define CONFIG_ANSI_DECODER 1
#define CONFIG_ASV1_DECODER 1
#define CONFIG_ASV2_DECODER 1
#define CONFIG_AURA_DECODER 1
#define CONFIG_AURA2_DECODER 1
#define CONFIG_AVS_DECODER 1
#define CONFIG_BETHSOFTVID_DECODER 1
#define CONFIG_BFI_DECODER 1
#define CONFIG_BINK_DECODER 1
#define CONFIG_BMP_DECODER 1
#define CONFIG_C93_DECODER 1
#define CONFIG_CAVS_DECODER 1
#define CONFIG_CDGRAPHICS_DECODER 1
#define CONFIG_CINEPAK_DECODER 1
#define CONFIG_CLJR_DECODER 1
#define CONFIG_CSCD_DECODER 1
#define CONFIG_CYUV_DECODER 1
#define CONFIG_DFA_DECODER 1
#define CONFIG_DNXHD_DECODER 1
#define CONFIG_DPX_DECODER 1
#define CONFIG_DSICINVIDEO_DECODER 1
#define CONFIG_DVVIDEO_DECODER 1
#define CONFIG_DXA_DECODER 1
#define CONFIG_EACMV_DECODER 1
#define CONFIG_EAMAD_DECODER 1
#define CONFIG_EATGQ_DECODER 1
#define CONFIG_EATGV_DECODER 1
#define CONFIG_EATQI_DECODER 1
#define CONFIG_EIGHTBPS_DECODER 1
#define CONFIG_EIGHTSVX_EXP_DECODER 1
#define CONFIG_EIGHTSVX_FIB_DECODER 1
#define CONFIG_EIGHTSVX_RAW_DECODER 1
#define CONFIG_ESCAPE124_DECODER 1
#define CONFIG_FFV1_DECODER 1
#define CONFIG_FFVHUFF_DECODER 1
#define CONFIG_FLASHSV_DECODER 1
#define CONFIG_FLIC_DECODER 1
#define CONFIG_FLV_DECODER 1
#define CONFIG_FOURXM_DECODER 1
#define CONFIG_FRAPS_DECODER 1
#define CONFIG_FRWU_DECODER 1
#define CONFIG_GIF_DECODER 1
#define CONFIG_H261_DECODER 1
#define CONFIG_H263_DECODER 1
#define CONFIG_H263I_DECODER 1
#define CONFIG_H264_DECODER 1
#define CONFIG_H264_CRYSTALHD_DECODER 0
#define CONFIG_H264_VDPAU_DECODER 0
#define CONFIG_HUFFYUV_DECODER 1
#define CONFIG_IDCIN_DECODER 1
#define CONFIG_IFF_BYTERUN1_DECODER 1
#define CONFIG_IFF_ILBM_DECODER 1
#define CONFIG_INDEO2_DECODER 1
#define CONFIG_INDEO3_DECODER 1
#define CONFIG_INDEO5_DECODER 1
#define CONFIG_INTERPLAY_VIDEO_DECODER 1
#define CONFIG_JPEG2000_DECODER 1
#define CONFIG_JPEGLS_DECODER 1
#define CONFIG_JV_DECODER 1
#define CONFIG_KGV1_DECODER 1
#define CONFIG_KMVC_DECODER 1
#define CONFIG_LAGARITH_DECODER 1
#define CONFIG_LOCO_DECODER 1
#define CONFIG_MDEC_DECODER 1
#define CONFIG_MIMIC_DECODER 1
#define CONFIG_MJPEG_DECODER 1
#define CONFIG_MJPEGB_DECODER 1
#define CONFIG_MMVIDEO_DECODER 1
#define CONFIG_MOTIONPIXELS_DECODER 1
#define CONFIG_MPEG_XVMC_DECODER 1
#define CONFIG_MPEG1VIDEO_DECODER 1
#define CONFIG_MPEG2VIDEO_DECODER 1
#define CONFIG_MPEG4_DECODER 1
#define CONFIG_MPEG4_CRYSTALHD_DECODER 0
#define CONFIG_MPEG4_VDPAU_DECODER 0
#define CONFIG_MPEGVIDEO_DECODER 1
#define CONFIG_MPEG_VDPAU_DECODER 0
#define CONFIG_MPEG1_VDPAU_DECODER 0
#define CONFIG_MPEG2_CRYSTALHD_DECODER 0
#define CONFIG_MSMPEG4_CRYSTALHD_DECODER 0
#define CONFIG_MSMPEG4V1_DECODER 1
#define CONFIG_MSMPEG4V2_DECODER 1
#define CONFIG_MSMPEG4V3_DECODER 1
#define CONFIG_MSRLE_DECODER 1
#define CONFIG_MSVIDEO1_DECODER 1
#define CONFIG_MSZH_DECODER 1
#define CONFIG_MXPEG_DECODER 1
#define CONFIG_NUV_DECODER 1
#define CONFIG_PAM_DECODER 1
#define CONFIG_PBM_DECODER 1
#define CONFIG_PCX_DECODER 1
#define CONFIG_PGM_DECODER 1
#define CONFIG_PGMYUV_DECODER 1
#define CONFIG_PICTOR_DECODER 1
#define CONFIG_PNG_DECODER 1
#define CONFIG_PPM_DECODER 1
#define CONFIG_PTX_DECODER 1
#define CONFIG_QDRAW_DECODER 1
#define CONFIG_QPEG_DECODER 1
#define CONFIG_QTRLE_DECODER 1
#define CONFIG_R10K_DECODER 1
#define CONFIG_R210_DECODER 1
#define CONFIG_RAWVIDEO_DECODER 1
#define CONFIG_RL2_DECODER 1
#define CONFIG_ROQ_DECODER 1
#define CONFIG_RPZA_DECODER 1
#define CONFIG_RV10_DECODER 1
#define CONFIG_RV20_DECODER 1
#define CONFIG_RV30_DECODER 1
#define CONFIG_RV40_DECODER 1
#define CONFIG_S302M_DECODER 1
#define CONFIG_SGI_DECODER 1
#define CONFIG_SMACKER_DECODER 1
#define CONFIG_SMC_DECODER 1
#define CONFIG_SNOW_DECODER 1
#define CONFIG_SP5X_DECODER 1
#define CONFIG_SUNRAST_DECODER 1
#define CONFIG_SVQ1_DECODER 1
#define CONFIG_SVQ3_DECODER 1
#define CONFIG_TARGA_DECODER 1
#define CONFIG_THEORA_DECODER 1
#define CONFIG_THP_DECODER 1
#define CONFIG_TIERTEXSEQVIDEO_DECODER 1
#define CONFIG_TIFF_DECODER 1
#define CONFIG_TMV_DECODER 1
#define CONFIG_TRUEMOTION1_DECODER 1
#define CONFIG_TRUEMOTION2_DECODER 1
#define CONFIG_TSCC_DECODER 1
#define CONFIG_TXD_DECODER 1
#define CONFIG_ULTI_DECODER 1
#define CONFIG_V210_DECODER 1
#define CONFIG_V210X_DECODER 1
#define CONFIG_VB_DECODER 1
#define CONFIG_VC1_DECODER 1
#define CONFIG_VC1_CRYSTALHD_DECODER 0
#define CONFIG_VC1_VDPAU_DECODER 0
#define CONFIG_VCR1_DECODER 1
#define CONFIG_VMDVIDEO_DECODER 1
#define CONFIG_VMNC_DECODER 1
#define CONFIG_VP3_DECODER 1
#define CONFIG_VP5_DECODER 1
#define CONFIG_VP6_DECODER 1
#define CONFIG_VP6A_DECODER 1
#define CONFIG_VP6F_DECODER 1
#define CONFIG_VP8_DECODER 1
#define CONFIG_VQA_DECODER 1
#define CONFIG_WMV1_DECODER 1
#define CONFIG_WMV2_DECODER 1
#define CONFIG_WMV3_DECODER 1
#define CONFIG_WMV3_CRYSTALHD_DECODER 0
#define CONFIG_WMV3_VDPAU_DECODER 0
#define CONFIG_WNV1_DECODER 1
#define CONFIG_XAN_WC3_DECODER 1
#define CONFIG_XAN_WC4_DECODER 1
#define CONFIG_XL_DECODER 1
#define CONFIG_YOP_DECODER 1
#define CONFIG_ZLIB_DECODER 1
#define CONFIG_ZMBV_DECODER 1
#define CONFIG_AAC_DECODER 1
#define CONFIG_AAC_LATM_DECODER 1
#define CONFIG_AC3_DECODER 1
#define CONFIG_ALAC_DECODER 1
#define CONFIG_ALS_DECODER 1
#define CONFIG_AMRNB_DECODER 1
#define CONFIG_AMRWB_DECODER 1
#define CONFIG_APE_DECODER 1
#define CONFIG_ATRAC1_DECODER 1
#define CONFIG_ATRAC3_DECODER 1
#define CONFIG_BINKAUDIO_DCT_DECODER 1
#define CONFIG_BINKAUDIO_RDFT_DECODER 1
#define CONFIG_COOK_DECODER 1
#define CONFIG_DCA_DECODER 1
#define CONFIG_DSICINAUDIO_DECODER 1
#define CONFIG_EAC3_DECODER 1
#define CONFIG_FLAC_DECODER 1
#define CONFIG_GSM_DECODER 1
#define CONFIG_GSM_MS_DECODER 1
#define CONFIG_IMC_DECODER 1
#define CONFIG_MACE3_DECODER 1
#define CONFIG_MACE6_DECODER 1
#define CONFIG_MLP_DECODER 1
#define CONFIG_MP1_DECODER 1
#define CONFIG_MP1FLOAT_DECODER 1
#define CONFIG_MP2_DECODER 1
#define CONFIG_MP2FLOAT_DECODER 1
#define CONFIG_MP3_DECODER 1
#define CONFIG_MP3FLOAT_DECODER 1
#define CONFIG_MP3ADU_DECODER 1
#define CONFIG_MP3ADUFLOAT_DECODER 1
#define CONFIG_MP3ON4_DECODER 1
#define CONFIG_MP3ON4FLOAT_DECODER 1
#define CONFIG_MPC7_DECODER 1
#define CONFIG_MPC8_DECODER 1
#define CONFIG_NELLYMOSER_DECODER 1
#define CONFIG_QCELP_DECODER 1
#define CONFIG_QDM2_DECODER 1
#define CONFIG_RA_144_DECODER 1
#define CONFIG_RA_288_DECODER 1
#define CONFIG_SHORTEN_DECODER 1
#define CONFIG_SIPR_DECODER 1
#define CONFIG_SMACKAUD_DECODER 1
#define CONFIG_SONIC_DECODER 1
#define CONFIG_TRUEHD_DECODER 1
#define CONFIG_TRUESPEECH_DECODER 1
#define CONFIG_TTA_DECODER 1
#define CONFIG_TWINVQ_DECODER 1
#define CONFIG_VMDAUDIO_DECODER 1
#define CONFIG_VORBIS_DECODER 1
#define CONFIG_WAVPACK_DECODER 1
#define CONFIG_WMAPRO_DECODER 1
#define CONFIG_WMAV1_DECODER 1
#define CONFIG_WMAV2_DECODER 1
#define CONFIG_WMAVOICE_DECODER 1
#define CONFIG_WS_SND1_DECODER 1
#define CONFIG_PCM_ALAW_DECODER 1
#define CONFIG_PCM_BLURAY_DECODER 1
#define CONFIG_PCM_DVD_DECODER 1
#define CONFIG_PCM_F32BE_DECODER 1
#define CONFIG_PCM_F32LE_DECODER 1
#define CONFIG_PCM_F64BE_DECODER 1
#define CONFIG_PCM_F64LE_DECODER 1
#define CONFIG_PCM_LXF_DECODER 1
#define CONFIG_PCM_MULAW_DECODER 1
#define CONFIG_PCM_S8_DECODER 1
#define CONFIG_PCM_S16BE_DECODER 1
#define CONFIG_PCM_S16LE_DECODER 1
#define CONFIG_PCM_S16LE_PLANAR_DECODER 1
#define CONFIG_PCM_S24BE_DECODER 1
#define CONFIG_PCM_S24DAUD_DECODER 1
#define CONFIG_PCM_S24LE_DECODER 1
#define CONFIG_PCM_S32BE_DECODER 1
#define CONFIG_PCM_S32LE_DECODER 1
#define CONFIG_PCM_U8_DECODER 1
#define CONFIG_PCM_U16BE_DECODER 1
#define CONFIG_PCM_U16LE_DECODER 1
#define CONFIG_PCM_U24BE_DECODER 1
#define CONFIG_PCM_U24LE_DECODER 1
#define CONFIG_PCM_U32BE_DECODER 1
#define CONFIG_PCM_U32LE_DECODER 1
#define CONFIG_PCM_ZORK_DECODER 1
#define CONFIG_INTERPLAY_DPCM_DECODER 1
#define CONFIG_ROQ_DPCM_DECODER 1
#define CONFIG_SOL_DPCM_DECODER 1
#define CONFIG_XAN_DPCM_DECODER 1
#define CONFIG_ADPCM_4XM_DECODER 1
#define CONFIG_ADPCM_ADX_DECODER 1
#define CONFIG_ADPCM_CT_DECODER 1
#define CONFIG_ADPCM_EA_DECODER 1
#define CONFIG_ADPCM_EA_MAXIS_XA_DECODER 1
#define CONFIG_ADPCM_EA_R1_DECODER 1
#define CONFIG_ADPCM_EA_R2_DECODER 1
#define CONFIG_ADPCM_EA_R3_DECODER 1
#define CONFIG_ADPCM_EA_XAS_DECODER 1
#define CONFIG_ADPCM_G722_DECODER 1
#define CONFIG_ADPCM_G726_DECODER 1
#define CONFIG_ADPCM_IMA_AMV_DECODER 1
#define CONFIG_ADPCM_IMA_DK3_DECODER 1
#define CONFIG_ADPCM_IMA_DK4_DECODER 1
#define CONFIG_ADPCM_IMA_EA_EACS_DECODER 1
#define CONFIG_ADPCM_IMA_EA_SEAD_DECODER 1
#define CONFIG_ADPCM_IMA_ISS_DECODER 1
#define CONFIG_ADPCM_IMA_QT_DECODER 1
#define CONFIG_ADPCM_IMA_SMJPEG_DECODER 1
#define CONFIG_ADPCM_IMA_WAV_DECODER 1
#define CONFIG_ADPCM_IMA_WS_DECODER 1
#define CONFIG_ADPCM_MS_DECODER 1
#define CONFIG_ADPCM_SBPRO_2_DECODER 1
#define CONFIG_ADPCM_SBPRO_3_DECODER 1
#define CONFIG_ADPCM_SBPRO_4_DECODER 1
#define CONFIG_ADPCM_SWF_DECODER 1
#define CONFIG_ADPCM_THP_DECODER 1
#define CONFIG_ADPCM_XA_DECODER 1
#define CONFIG_ADPCM_YAMAHA_DECODER 1
#define CONFIG_ASS_DECODER 1
#define CONFIG_DVBSUB_DECODER 1
#define CONFIG_DVDSUB_DECODER 1
#define CONFIG_PGSSUB_DECODER 1
#define CONFIG_SRT_DECODER 1
#define CONFIG_XSUB_DECODER 1
#define CONFIG_LIBCELT_DECODER 0
#define CONFIG_LIBDIRAC_DECODER 0
#define CONFIG_LIBGSM_DECODER 0
#define CONFIG_LIBGSM_MS_DECODER 0
#define CONFIG_LIBOPENCORE_AMRNB_DECODER 0
#define CONFIG_LIBOPENCORE_AMRWB_DECODER 0
#define CONFIG_LIBOPENJPEG_DECODER 0
#define CONFIG_LIBSCHROEDINGER_DECODER 0
#define CONFIG_LIBSPEEX_DECODER 0
#define CONFIG_LIBVPX_DECODER 0
#define CONFIG_A64MULTI_ENCODER 1
#define CONFIG_A64MULTI5_ENCODER 1
#define CONFIG_ASV1_ENCODER 1
#define CONFIG_ASV2_ENCODER 1
#define CONFIG_BMP_ENCODER 1
#define CONFIG_DNXHD_ENCODER 1
#define CONFIG_DPX_ENCODER 1
#define CONFIG_DVVIDEO_ENCODER 1
#define CONFIG_FFV1_ENCODER 1
#define CONFIG_FFVHUFF_ENCODER 1
#define CONFIG_FLASHSV_ENCODER 1
#define CONFIG_FLASHSV2_ENCODER 1
#define CONFIG_FLV_ENCODER 1
#define CONFIG_GIF_ENCODER 1
#define CONFIG_H261_ENCODER 1
#define CONFIG_H263_ENCODER 1
#define CONFIG_H263P_ENCODER 1
#define CONFIG_HUFFYUV_ENCODER 1
#define CONFIG_JPEGLS_ENCODER 1
#define CONFIG_LJPEG_ENCODER 1
#define CONFIG_MJPEG_ENCODER 1
#define CONFIG_MPEG1VIDEO_ENCODER 1
#define CONFIG_MPEG2VIDEO_ENCODER 1
#define CONFIG_MPEG4_ENCODER 1
#define CONFIG_MSMPEG4V2_ENCODER 1
#define CONFIG_MSMPEG4V3_ENCODER 1
#define CONFIG_MSVIDEO1_ENCODER 1
#define CONFIG_PAM_ENCODER 1
#define CONFIG_PBM_ENCODER 1
#define CONFIG_PCX_ENCODER 1
#define CONFIG_PGM_ENCODER 1
#define CONFIG_PGMYUV_ENCODER 1
#define CONFIG_PNG_ENCODER 1
#define CONFIG_PPM_ENCODER 1
#define CONFIG_QTRLE_ENCODER 1
#define CONFIG_RAWVIDEO_ENCODER 1
#define CONFIG_ROQ_ENCODER 1
#define CONFIG_RV10_ENCODER 1
#define CONFIG_RV20_ENCODER 1
#define CONFIG_SGI_ENCODER 1
#define CONFIG_SNOW_ENCODER 1
#define CONFIG_SVQ1_ENCODER 1
#define CONFIG_TARGA_ENCODER 1
#define CONFIG_TIFF_ENCODER 1
#define CONFIG_V210_ENCODER 1
#define CONFIG_WMV1_ENCODER 1
#define CONFIG_WMV2_ENCODER 1
#define CONFIG_ZLIB_ENCODER 1
#define CONFIG_ZMBV_ENCODER 1
#define CONFIG_AAC_ENCODER 1
#define CONFIG_AC3_ENCODER 1
#define CONFIG_AC3_FIXED_ENCODER 1
#define CONFIG_AC3_FLOAT_ENCODER 1
#define CONFIG_ALAC_ENCODER 1
#define CONFIG_DCA_ENCODER 1
#define CONFIG_EAC3_ENCODER 1
#define CONFIG_FLAC_ENCODER 1
#define CONFIG_MP2_ENCODER 1
#define CONFIG_NELLYMOSER_ENCODER 1
#define CONFIG_RA_144_ENCODER 1
#define CONFIG_SONIC_ENCODER 1
#define CONFIG_SONIC_LS_ENCODER 1
#define CONFIG_VORBIS_ENCODER 1
#define CONFIG_WMAV1_ENCODER 1
#define CONFIG_WMAV2_ENCODER 1
#define CONFIG_PCM_ALAW_ENCODER 1
#define CONFIG_PCM_F32BE_ENCODER 1
#define CONFIG_PCM_F32LE_ENCODER 1
#define CONFIG_PCM_F64BE_ENCODER 1
#define CONFIG_PCM_F64LE_ENCODER 1
#define CONFIG_PCM_MULAW_ENCODER 1
#define CONFIG_PCM_S8_ENCODER 1
#define CONFIG_PCM_S16BE_ENCODER 1
#define CONFIG_PCM_S16LE_ENCODER 1
#define CONFIG_PCM_S24BE_ENCODER 1
#define CONFIG_PCM_S24DAUD_ENCODER 1
#define CONFIG_PCM_S24LE_ENCODER 1
#define CONFIG_PCM_S32BE_ENCODER 1
#define CONFIG_PCM_S32LE_ENCODER 1
#define CONFIG_PCM_U8_ENCODER 1
#define CONFIG_PCM_U16BE_ENCODER 1
#define CONFIG_PCM_U16LE_ENCODER 1
#define CONFIG_PCM_U24BE_ENCODER 1
#define CONFIG_PCM_U24LE_ENCODER 1
#define CONFIG_PCM_U32BE_ENCODER 1
#define CONFIG_PCM_U32LE_ENCODER 1
#define CONFIG_PCM_ZORK_ENCODER 1
#define CONFIG_ROQ_DPCM_ENCODER 1
#define CONFIG_ADPCM_ADX_ENCODER 1
#define CONFIG_ADPCM_G722_ENCODER 1
#define CONFIG_ADPCM_G726_ENCODER 1
#define CONFIG_ADPCM_IMA_QT_ENCODER 1
#define CONFIG_ADPCM_IMA_WAV_ENCODER 1
#define CONFIG_ADPCM_MS_ENCODER 1
#define CONFIG_ADPCM_SWF_ENCODER 1
#define CONFIG_ADPCM_YAMAHA_ENCODER 1
#define CONFIG_ASS_ENCODER 1
#define CONFIG_DVBSUB_ENCODER 1
#define CONFIG_DVDSUB_ENCODER 1
#define CONFIG_SRT_ENCODER 1
#define CONFIG_XSUB_ENCODER 1
#define CONFIG_LIBDIRAC_ENCODER 0
#define CONFIG_LIBFAAC_ENCODER 0
#define CONFIG_LIBGSM_ENCODER 0
#define CONFIG_LIBGSM_MS_ENCODER 0
#define CONFIG_LIBMP3LAME_ENCODER 0
#define CONFIG_LIBOPENCORE_AMRNB_ENCODER 0
#define CONFIG_LIBSCHROEDINGER_ENCODER 0
#define CONFIG_LIBSPEEX_ENCODER 0
#define CONFIG_LIBTHEORA_ENCODER 0
#define CONFIG_LIBVO_AACENC_ENCODER 0
#define CONFIG_LIBVO_AMRWBENC_ENCODER 0
#define CONFIG_LIBVORBIS_ENCODER 0
#define CONFIG_LIBVPX_ENCODER 0
#define CONFIG_LIBX264_ENCODER 0
#define CONFIG_LIBXAVS_ENCODER 0
#define CONFIG_LIBXVID_ENCODER 0
#define CONFIG_H263_VAAPI_HWACCEL 0
#define CONFIG_H264_DXVA2_HWACCEL 0
#define CONFIG_H264_VAAPI_HWACCEL 0
#define CONFIG_MPEG1_VDPAU_HWACCEL 0
#define CONFIG_MPEG2_DXVA2_HWACCEL 0
#define CONFIG_MPEG2_VAAPI_HWACCEL 0
#define CONFIG_MPEG2_VDPAU_HWACCEL 0
#define CONFIG_MPEG4_VAAPI_HWACCEL 0
#define CONFIG_VC1_DXVA2_HWACCEL 0
#define CONFIG_VC1_VAAPI_HWACCEL 0
#define CONFIG_WMV3_DXVA2_HWACCEL 0
#define CONFIG_WMV3_VAAPI_HWACCEL 0
#define CONFIG_AAC_PARSER 1
#define CONFIG_AAC_LATM_PARSER 1
#define CONFIG_AC3_PARSER 1
#define CONFIG_CAVSVIDEO_PARSER 1
#define CONFIG_DCA_PARSER 1
#define CONFIG_DIRAC_PARSER 1
#define CONFIG_DNXHD_PARSER 1
#define CONFIG_DVBSUB_PARSER 1
#define CONFIG_DVDSUB_PARSER 1
#define CONFIG_FLAC_PARSER 1
#define CONFIG_H261_PARSER 1
#define CONFIG_H263_PARSER 1
#define CONFIG_H264_PARSER 1
#define CONFIG_MJPEG_PARSER 1
#define CONFIG_MLP_PARSER 1
#define CONFIG_MPEG4VIDEO_PARSER 1
#define CONFIG_MPEGAUDIO_PARSER 1
#define CONFIG_MPEGVIDEO_PARSER 1
#define CONFIG_PNM_PARSER 1
#define CONFIG_VC1_PARSER 1
#define CONFIG_VP3_PARSER 1
#define CONFIG_VP8_PARSER 1
#define CONFIG_AAC_ADTSTOASC_BSF 1
#define CONFIG_CHOMP_BSF 1
#define CONFIG_DUMP_EXTRADATA_BSF 1
#define CONFIG_H264_MP4TOANNEXB_BSF 1
#define CONFIG_IMX_DUMP_HEADER_BSF 1
#define CONFIG_MJPEG2JPEG_BSF 1
#define CONFIG_MJPEGA_DUMP_HEADER_BSF 1
#define CONFIG_MP3_HEADER_COMPRESS_BSF 1
#define CONFIG_MP3_HEADER_DECOMPRESS_BSF 1
#define CONFIG_MOV2TEXTSUB_BSF 1
#define CONFIG_NOISE_BSF 1
#define CONFIG_REMOVE_EXTRADATA_BSF 1
#define CONFIG_TEXT2MOVSUB_BSF 1
#define CONFIG_AAC_DEMUXER 1
#define CONFIG_AC3_DEMUXER 1
#define CONFIG_AEA_DEMUXER 1
#define CONFIG_AIFF_DEMUXER 1
#define CONFIG_AMR_DEMUXER 1
#define CONFIG_ANM_DEMUXER 1
#define CONFIG_APC_DEMUXER 1
#define CONFIG_APE_DEMUXER 1
#define CONFIG_APPLEHTTP_DEMUXER 1
#define CONFIG_ASF_DEMUXER 1
#define CONFIG_ASS_DEMUXER 1
#define CONFIG_AU_DEMUXER 1
#define CONFIG_AVI_DEMUXER 1
#define CONFIG_AVISYNTH_DEMUXER 0
#define CONFIG_AVS_DEMUXER 1
#define CONFIG_BETHSOFTVID_DEMUXER 1
#define CONFIG_BFI_DEMUXER 1
#define CONFIG_BINK_DEMUXER 1
#define CONFIG_C93_DEMUXER 1
#define CONFIG_CAF_DEMUXER 1
#define CONFIG_CAVSVIDEO_DEMUXER 1
#define CONFIG_CDG_DEMUXER 1
#define CONFIG_DAUD_DEMUXER 1
#define CONFIG_DFA_DEMUXER 1
#define CONFIG_DIRAC_DEMUXER 1
#define CONFIG_DNXHD_DEMUXER 1
#define CONFIG_DSICIN_DEMUXER 1
#define CONFIG_DTS_DEMUXER 1
#define CONFIG_DV_DEMUXER 1
#define CONFIG_DXA_DEMUXER 1
#define CONFIG_EA_DEMUXER 1
#define CONFIG_EA_CDATA_DEMUXER 1
#define CONFIG_EAC3_DEMUXER 1
#define CONFIG_FFM_DEMUXER 1
#define CONFIG_FFMETADATA_DEMUXER 1
#define CONFIG_FILMSTRIP_DEMUXER 1
#define CONFIG_FLAC_DEMUXER 1
#define CONFIG_FLIC_DEMUXER 1
#define CONFIG_FLV_DEMUXER 1
#define CONFIG_FOURXM_DEMUXER 1
#define CONFIG_G722_DEMUXER 1
#define CONFIG_GSM_DEMUXER 1
#define CONFIG_GXF_DEMUXER 1
#define CONFIG_H261_DEMUXER 1
#define CONFIG_H263_DEMUXER 1
#define CONFIG_H264_DEMUXER 1
#define CONFIG_IDCIN_DEMUXER 1
#define CONFIG_IFF_DEMUXER 1
#define CONFIG_IMAGE2_DEMUXER 1
#define CONFIG_IMAGE2PIPE_DEMUXER 1
#define CONFIG_INGENIENT_DEMUXER 1
#define CONFIG_IPMOVIE_DEMUXER 1
#define CONFIG_ISS_DEMUXER 1
#define CONFIG_IV8_DEMUXER 1
#define CONFIG_IVF_DEMUXER 1
#define CONFIG_JV_DEMUXER 1
#define CONFIG_LMLM4_DEMUXER 1
#define CONFIG_LXF_DEMUXER 1
#define CONFIG_M4V_DEMUXER 1
#define CONFIG_MATROSKA_DEMUXER 1
#define CONFIG_MICRODVD_DEMUXER 1
#define CONFIG_MJPEG_DEMUXER 1
#define CONFIG_MLP_DEMUXER 1
#define CONFIG_MM_DEMUXER 1
#define CONFIG_MMF_DEMUXER 1
#define CONFIG_MOV_DEMUXER 1
#define CONFIG_MP3_DEMUXER 1
#define CONFIG_MPC_DEMUXER 1
#define CONFIG_MPC8_DEMUXER 1
#define CONFIG_MPEGPS_DEMUXER 1
#define CONFIG_MPEGTS_DEMUXER 1
#define CONFIG_MPEGTSRAW_DEMUXER 1
#define CONFIG_MPEGVIDEO_DEMUXER 1
#define CONFIG_MSNWC_TCP_DEMUXER 1
#define CONFIG_MTV_DEMUXER 1
#define CONFIG_MVI_DEMUXER 1
#define CONFIG_MXF_DEMUXER 1
#define CONFIG_MXG_DEMUXER 1
#define CONFIG_NC_DEMUXER 1
#define CONFIG_NSV_DEMUXER 1
#define CONFIG_NUT_DEMUXER 1
#define CONFIG_NUV_DEMUXER 1
#define CONFIG_OGG_DEMUXER 1
#define CONFIG_OMA_DEMUXER 1
#define CONFIG_PCM_ALAW_DEMUXER 1
#define CONFIG_PCM_MULAW_DEMUXER 1
#define CONFIG_PCM_F64BE_DEMUXER 1
#define CONFIG_PCM_F64LE_DEMUXER 1
#define CONFIG_PCM_F32BE_DEMUXER 1
#define CONFIG_PCM_F32LE_DEMUXER 1
#define CONFIG_PCM_S32BE_DEMUXER 1
#define CONFIG_PCM_S32LE_DEMUXER 1
#define CONFIG_PCM_S24BE_DEMUXER 1
#define CONFIG_PCM_S24LE_DEMUXER 1
#define CONFIG_PCM_S16BE_DEMUXER 1
#define CONFIG_PCM_S16LE_DEMUXER 1
#define CONFIG_PCM_S8_DEMUXER 1
#define CONFIG_PCM_U32BE_DEMUXER 1
#define CONFIG_PCM_U32LE_DEMUXER 1
#define CONFIG_PCM_U24BE_DEMUXER 1
#define CONFIG_PCM_U24LE_DEMUXER 1
#define CONFIG_PCM_U16BE_DEMUXER 1
#define CONFIG_PCM_U16LE_DEMUXER 1
#define CONFIG_PCM_U8_DEMUXER 1
#define CONFIG_PMP_DEMUXER 1
#define CONFIG_PVA_DEMUXER 1
#define CONFIG_QCP_DEMUXER 1
#define CONFIG_R3D_DEMUXER 1
#define CONFIG_RAWVIDEO_DEMUXER 1
#define CONFIG_RL2_DEMUXER 1
#define CONFIG_RM_DEMUXER 1
#define CONFIG_ROQ_DEMUXER 1
#define CONFIG_RPL_DEMUXER 1
#define CONFIG_RSO_DEMUXER 1
#define CONFIG_RTP_DEMUXER 1
#define CONFIG_RTSP_DEMUXER 1
#define CONFIG_SAP_DEMUXER 1
#define CONFIG_SDP_DEMUXER 1
#define CONFIG_SEGAFILM_DEMUXER 1
#define CONFIG_SHORTEN_DEMUXER 1
#define CONFIG_SIFF_DEMUXER 1
#define CONFIG_SMACKER_DEMUXER 1
#define CONFIG_SOL_DEMUXER 1
#define CONFIG_SOX_DEMUXER 1
#define CONFIG_SPDIF_DEMUXER 1
#define CONFIG_SRT_DEMUXER 1
#define CONFIG_STR_DEMUXER 1
#define CONFIG_SWF_DEMUXER 1
#define CONFIG_THP_DEMUXER 1
#define CONFIG_TIERTEXSEQ_DEMUXER 1
#define CONFIG_TMV_DEMUXER 1
#define CONFIG_TRUEHD_DEMUXER 1
#define CONFIG_TTA_DEMUXER 1
#define CONFIG_TXD_DEMUXER 1
#define CONFIG_TTY_DEMUXER 1
#define CONFIG_VC1_DEMUXER 1
#define CONFIG_VC1T_DEMUXER 1
#define CONFIG_VMD_DEMUXER 1
#define CONFIG_VOC_DEMUXER 1
#define CONFIG_VQF_DEMUXER 1
#define CONFIG_W64_DEMUXER 1
#define CONFIG_WAV_DEMUXER 1
#define CONFIG_WC3_DEMUXER 1
#define CONFIG_WSAUD_DEMUXER 1
#define CONFIG_WSVQA_DEMUXER 1
#define CONFIG_WTV_DEMUXER 1
#define CONFIG_WV_DEMUXER 1
#define CONFIG_XA_DEMUXER 1
#define CONFIG_XWMA_DEMUXER 1
#define CONFIG_YOP_DEMUXER 1
#define CONFIG_YUV4MPEGPIPE_DEMUXER 1
#define CONFIG_LIBNUT_DEMUXER 0
#define CONFIG_A64_MUXER 1
#define CONFIG_AC3_MUXER 1
#define CONFIG_ADTS_MUXER 1
#define CONFIG_AIFF_MUXER 1
#define CONFIG_AMR_MUXER 1
#define CONFIG_ASF_MUXER 1
#define CONFIG_ASS_MUXER 1
#define CONFIG_ASF_STREAM_MUXER 1
#define CONFIG_AU_MUXER 1
#define CONFIG_AVI_MUXER 1
#define CONFIG_AVM2_MUXER 1
#define CONFIG_CAF_MUXER 1
#define CONFIG_CAVSVIDEO_MUXER 1
#define CONFIG_CRC_MUXER 1
#define CONFIG_DAUD_MUXER 1
#define CONFIG_DIRAC_MUXER 1
#define CONFIG_DNXHD_MUXER 1
#define CONFIG_DTS_MUXER 1
#define CONFIG_DV_MUXER 1
#define CONFIG_EAC3_MUXER 1
#define CONFIG_FFM_MUXER 1
#define CONFIG_FFMETADATA_MUXER 1
#define CONFIG_FILMSTRIP_MUXER 1
#define CONFIG_FLAC_MUXER 1
#define CONFIG_FLV_MUXER 1
#define CONFIG_FRAMECRC_MUXER 1
#define CONFIG_FRAMEMD5_MUXER 1
#define CONFIG_G722_MUXER 1
#define CONFIG_GIF_MUXER 1
#define CONFIG_GXF_MUXER 1
#define CONFIG_H261_MUXER 1
#define CONFIG_H263_MUXER 1
#define CONFIG_H264_MUXER 1
#define CONFIG_IMAGE2_MUXER 1
#define CONFIG_IMAGE2PIPE_MUXER 1
#define CONFIG_IPOD_MUXER 1
#define CONFIG_IVF_MUXER 1
#define CONFIG_M4V_MUXER 1
#define CONFIG_MD5_MUXER 1
#define CONFIG_MATROSKA_MUXER 1
#define CONFIG_MATROSKA_AUDIO_MUXER 1
#define CONFIG_MICRODVD_MUXER 1
#define CONFIG_MJPEG_MUXER 1
#define CONFIG_MLP_MUXER 1
#define CONFIG_MMF_MUXER 1
#define CONFIG_MOV_MUXER 1
#define CONFIG_MP2_MUXER 1
#define CONFIG_MP3_MUXER 1
#define CONFIG_MP4_MUXER 1
#define CONFIG_MPEG1SYSTEM_MUXER 1
#define CONFIG_MPEG1VCD_MUXER 1
#define CONFIG_MPEG1VIDEO_MUXER 1
#define CONFIG_MPEG2DVD_MUXER 1
#define CONFIG_MPEG2SVCD_MUXER 1
#define CONFIG_MPEG2VIDEO_MUXER 1
#define CONFIG_MPEG2VOB_MUXER 1
#define CONFIG_MPEGTS_MUXER 1
#define CONFIG_MPJPEG_MUXER 1
#define CONFIG_MXF_MUXER 1
#define CONFIG_MXF_D10_MUXER 1
#define CONFIG_NULL_MUXER 1
#define CONFIG_NUT_MUXER 1
#define CONFIG_OGG_MUXER 1
#define CONFIG_PCM_ALAW_MUXER 1
#define CONFIG_PCM_MULAW_MUXER 1
#define CONFIG_PCM_F64BE_MUXER 1
#define CONFIG_PCM_F64LE_MUXER 1
#define CONFIG_PCM_F32BE_MUXER 1
#define CONFIG_PCM_F32LE_MUXER 1
#define CONFIG_PCM_S32BE_MUXER 1
#define CONFIG_PCM_S32LE_MUXER 1
#define CONFIG_PCM_S24BE_MUXER 1
#define CONFIG_PCM_S24LE_MUXER 1
#define CONFIG_PCM_S16BE_MUXER 1
#define CONFIG_PCM_S16LE_MUXER 1
#define CONFIG_PCM_S8_MUXER 1
#define CONFIG_PCM_U32BE_MUXER 1
#define CONFIG_PCM_U32LE_MUXER 1
#define CONFIG_PCM_U24BE_MUXER 1
#define CONFIG_PCM_U24LE_MUXER 1
#define CONFIG_PCM_U16BE_MUXER 1
#define CONFIG_PCM_U16LE_MUXER 1
#define CONFIG_PCM_U8_MUXER 1
#define CONFIG_PSP_MUXER 1
#define CONFIG_RAWVIDEO_MUXER 1
#define CONFIG_RM_MUXER 1
#define CONFIG_ROQ_MUXER 1
#define CONFIG_RSO_MUXER 1
#define CONFIG_RTP_MUXER 1
#define CONFIG_RTSP_MUXER 1
#define CONFIG_SAP_MUXER 1
#define CONFIG_SOX_MUXER 1
#define CONFIG_SPDIF_MUXER 1
#define CONFIG_SRT_MUXER 1
#define CONFIG_SWF_MUXER 1
#define CONFIG_TG2_MUXER 1
#define CONFIG_TGP_MUXER 1
#define CONFIG_TRUEHD_MUXER 1
#define CONFIG_VC1T_MUXER 1
#define CONFIG_VOC_MUXER 1
#define CONFIG_WAV_MUXER 1
#define CONFIG_WEBM_MUXER 1
#define CONFIG_YUV4MPEGPIPE_MUXER 1
#define CONFIG_LIBNUT_MUXER 0
#define CONFIG_ANULL_FILTER 1
#define CONFIG_ANULLSRC_FILTER 1
#define CONFIG_ANULLSINK_FILTER 1
#define CONFIG_BLACKFRAME_FILTER 0
#define CONFIG_COPY_FILTER 1
#define CONFIG_CROP_FILTER 1
#define CONFIG_CROPDETECT_FILTER 0
#define CONFIG_DRAWBOX_FILTER 1
#define CONFIG_DRAWTEXT_FILTER 0
#define CONFIG_FADE_FILTER 1
#define CONFIG_FIELDORDER_FILTER 1
#define CONFIG_FIFO_FILTER 1
#define CONFIG_FORMAT_FILTER 1
#define CONFIG_FREI0R_FILTER 0
#define CONFIG_GRADFUN_FILTER 1
#define CONFIG_HFLIP_FILTER 1
#define CONFIG_HQDN3D_FILTER 0
#define CONFIG_LUT_FILTER 1
#define CONFIG_LUTRGB_FILTER 1
#define CONFIG_LUTYUV_FILTER 1
#define CONFIG_MP_FILTER 0
#define CONFIG_NEGATE_FILTER 1
#define CONFIG_NOFORMAT_FILTER 1
#define CONFIG_NULL_FILTER 1
#define CONFIG_OCV_FILTER 0
#define CONFIG_OVERLAY_FILTER 1
#define CONFIG_PAD_FILTER 1
#define CONFIG_PIXDESCTEST_FILTER 1
#define CONFIG_SCALE_FILTER 1
#define CONFIG_SELECT_FILTER 1
#define CONFIG_SETDAR_FILTER 1
#define CONFIG_SETPTS_FILTER 1
#define CONFIG_SETSAR_FILTER 1
#define CONFIG_SETTB_FILTER 1
#define CONFIG_SHOWINFO_FILTER 1
#define CONFIG_SLICIFY_FILTER 1
#define CONFIG_SPLIT_FILTER 1
#define CONFIG_TRANSPOSE_FILTER 1
#define CONFIG_UNSHARP_FILTER 1
#define CONFIG_VFLIP_FILTER 1
#define CONFIG_YADIF_FILTER 0
#define CONFIG_BUFFER_FILTER 1
#define CONFIG_COLOR_FILTER 1
#define CONFIG_FREI0R_SRC_FILTER 0
#define CONFIG_MOVIE_FILTER 1
#define CONFIG_NULLSRC_FILTER 1
#define CONFIG_BUFFERSINK_FILTER 1
#define CONFIG_NULLSINK_FILTER 1
#define CONFIG_APPLEHTTP_PROTOCOL 1
#define CONFIG_CONCAT_PROTOCOL 1
#define CONFIG_CRYPTO_PROTOCOL 1
#define CONFIG_FILE_PROTOCOL 1
#define CONFIG_GOPHER_PROTOCOL 1
#define CONFIG_HTTP_PROTOCOL 1
#define CONFIG_MMSH_PROTOCOL 1
#define CONFIG_MMST_PROTOCOL 1
#define CONFIG_MD5_PROTOCOL 1
#define CONFIG_PIPE_PROTOCOL 1
#define CONFIG_RTMP_PROTOCOL 1
#define CONFIG_RTMPT_PROTOCOL 1
#define CONFIG_RTMPE_PROTOCOL 1
#define CONFIG_RTMPTE_PROTOCOL 1
#define CONFIG_RTMPS_PROTOCOL 1
#define CONFIG_RTP_PROTOCOL 1
#define CONFIG_TCP_PROTOCOL 1
#define CONFIG_UDP_PROTOCOL 1
#define CONFIG_ALSA_INDEV 0
#define CONFIG_BKTR_INDEV 0
#define CONFIG_DSHOW_INDEV 0
#define CONFIG_DV1394_INDEV 0
#define CONFIG_FBDEV_INDEV 0
#define CONFIG_JACK_INDEV 0
#define CONFIG_OSS_INDEV 0
#define CONFIG_SNDIO_INDEV 0
#define CONFIG_V4L2_INDEV 0
#define CONFIG_V4L_INDEV 0
#define CONFIG_VFWCAP_INDEV 0
#define CONFIG_X11_GRAB_DEVICE_INDEV 0
#define CONFIG_LIBDC1394_INDEV 0
#define CONFIG_ALSA_OUTDEV 0
#define CONFIG_OSS_OUTDEV 0
#define CONFIG_SDL_OUTDEV 1
#define CONFIG_SNDIO_OUTDEV 0
#include "libavformat/avformat.h"
#include "libavfilter/avfilter.h"
#include "libavdevice/avdevice.h"
#include "libswscale/swscale.h"
#include "libavutil/avstring.h"
#include "libavutil/parseutils.h"
#include "libavutil/pixdesc.h"
#include "libavutil/eval.h"
#include "libavutil/dict.h"
#include "libavutil/opt.h"
#include "cmdutils.h"
#if CONFIG_NETWORK
#include "libavformat/network.h"
#endif
#if HAVE_SYS_RESOURCE_H
#include <sys/resource.h>
#endif

const char **opt_names;
const char **opt_values;
static int opt_name_count;
AVCodecContext *avcodec_opts[AVMEDIA_TYPE_NB];
AVFormatContext *avformat_opts;
struct SwsContext *sws_opts;
AVDictionary *format_opts, *video_opts, *audio_opts, *sub_opts;

static const int this_year = 2011;

void init_opts(void)
{
    int i;
    for (i = 0; i < AVMEDIA_TYPE_NB; i++)
        avcodec_opts[i] = avcodec_alloc_context2(i);
    avformat_opts = avformat_alloc_context();
#if CONFIG_SWSCALE
    sws_opts = sws_getContext(16, 16, 0, 16, 16, 0, SWS_BICUBIC, NULL, NULL, NULL);
#endif
}

void uninit_opts(void)
{
    int i;
    for (i = 0; i < AVMEDIA_TYPE_NB; i++)
        av_freep(&avcodec_opts[i]);
    av_freep(&avformat_opts->key);
    av_freep(&avformat_opts);
#if CONFIG_SWSCALE
    sws_freeContext(sws_opts);
    sws_opts = NULL;
#endif
    for (i = 0; i < opt_name_count; i++) {
        av_freep(&opt_names[i]);
        av_freep(&opt_values[i]);
    }
    av_freep(&opt_names);
    av_freep(&opt_values);
    opt_name_count = 0;
    av_dict_free(&format_opts);
    av_dict_free(&video_opts);
    av_dict_free(&audio_opts);
    av_dict_free(&sub_opts);
}

void log_callback_help(void* ptr, int level, const char* fmt, va_list vl)
{
    vfprintf(stdout, fmt, vl);
}

double parse_number_or_die(const char *context, const char *numstr, int type, double min, double max)
{
    char *tail;
    const char *error;
    double d = av_strtod(numstr, &tail);
    if (*tail)
        error= "Expected number for %s but found: %s\n";
    else if (d < min || d > max)
        error= "The value for %s was %s which is not within %f - %f\n";
    else if(type == OPT_INT64 && (int64_t)d != d)
        error= "Expected int64 for %s but found %s\n";
    else if (type == OPT_INT && (int)d != d)
        error= "Expected int for %s but found %s\n";
    else
        return d;
    fprintf(stderr, error, context, numstr, min, max);
    exit(1);
}

int64_t parse_time_or_die(const char *context, const char *timestr, int is_duration)
{
    int64_t us;
    if (av_parse_time(&us, timestr, is_duration) < 0) {
        fprintf(stderr, "Invalid %s specification for %s: %s\n",
                is_duration ? "duration" : "date", context, timestr);
        exit(1);
    }
    return us;
}

void show_help_options(const OptionDef *options, const char *msg, int mask, int value)
{
    const OptionDef *po;
    int first;

    first = 1;
    for(po = options; po->name != NULL; po++) {
        char buf[64];
        if ((po->flags & mask) == value) {
            if (first) {
                printf("%s", msg);
                first = 0;
            }
            av_strlcpy(buf, po->name, sizeof(buf));
            if (po->flags & HAS_ARG) {
                av_strlcat(buf, " ", sizeof(buf));
                av_strlcat(buf, po->argname, sizeof(buf));
            }
            printf("-%-17s  %s\n", buf, po->help);
        }
    }
}

static const OptionDef* find_option(const OptionDef *po, const char *name){
    while (po->name != NULL) {
        if (!strcmp(name, po->name))
            break;
        po++;
    }
    return po;
}

#if defined(_WIN32) && !defined(__MINGW32CE__)
#include <windows.h>
/* Will be leaked on exit */
static char** win32_argv_utf8 = NULL;
static int win32_argc = 0;

/**
 * Prepare command line arguments for executable.
 * For Windows - perform wide-char to UTF-8 conversion.
 * Input arguments should be main() function arguments.
 * @param argc_ptr Arguments number (including executable)
 * @param argv_ptr Arguments list.
 */
static void prepare_app_arguments(int *argc_ptr, char ***argv_ptr)
{
    char *argstr_flat;
    wchar_t **argv_w;
    int i, buffsize = 0, offset = 0;

    if (win32_argv_utf8) {
        *argc_ptr = win32_argc;
        *argv_ptr = win32_argv_utf8;
        return;
    }

    win32_argc = 0;
    argv_w = CommandLineToArgvW(GetCommandLineW(), &win32_argc);
    if (win32_argc <= 0 || !argv_w)
        return;

    /* determine the UTF-8 buffer size (including NULL-termination symbols) */
    for (i = 0; i < win32_argc; i++)
        buffsize += WideCharToMultiByte(CP_UTF8, 0, argv_w[i], -1,
                                        NULL, 0, NULL, NULL);

    win32_argv_utf8 = av_mallocz(sizeof(char*) * (win32_argc + 1) + buffsize);
    argstr_flat     = (char*)win32_argv_utf8 + sizeof(char*) * (win32_argc + 1);
    if (win32_argv_utf8 == NULL) {
        LocalFree(argv_w);
        return;
    }

    for (i = 0; i < win32_argc; i++) {
        win32_argv_utf8[i] = &argstr_flat[offset];
        offset += WideCharToMultiByte(CP_UTF8, 0, argv_w[i], -1,
                                      &argstr_flat[offset],
                                      buffsize - offset, NULL, NULL);
    }
    win32_argv_utf8[i] = NULL;
    LocalFree(argv_w);

    *argc_ptr = win32_argc;
    *argv_ptr = win32_argv_utf8;
}
#else
static inline void prepare_app_arguments(int *argc_ptr, char ***argv_ptr)
{
    /* nothing to do */
}
#endif /* WIN32 && !__MINGW32CE__ */

void parse_options(int argc, char **argv, const OptionDef *options,
                   int (* parse_arg_function)(const char *opt, const char *arg))
{
    const char *opt, *arg;
    int optindex, handleoptions=1;
    const OptionDef *po;

    /* perform system-dependent conversions for arguments list */
    prepare_app_arguments(&argc, &argv);

    /* parse options */
    optindex = 1;
    while (optindex < argc) {
        opt = argv[optindex++];

        if (handleoptions && opt[0] == '-' && opt[1] != '\0') {
            int bool_val = 1;
            if (opt[1] == '-' && opt[2] == '\0') {
                handleoptions = 0;
                continue;
            }
            opt++;
            po= find_option(options, opt);
            if (!po->name && opt[0] == 'n' && opt[1] == 'o') {
                /* handle 'no' bool option */
                po = find_option(options, opt + 2);
                if (!(po->name && (po->flags & OPT_BOOL)))
                    goto unknown_opt;
                bool_val = 0;
            }
            if (!po->name)
                po= find_option(options, "default");
            if (!po->name) {
unknown_opt:
                fprintf(stderr, "%s: unrecognized option '%s'\n", argv[0], opt);
                exit(1);
            }
            arg = NULL;
            if (po->flags & HAS_ARG) {
                arg = argv[optindex++];
                if (!arg) {
                    fprintf(stderr, "%s: missing argument for option '%s'\n", argv[0], opt);
                    exit(1);
                }
            }
            if (po->flags & OPT_STRING) {
                char *str;
                str = av_strdup(arg);
                *po->u.str_arg = str;
            } else if (po->flags & OPT_BOOL) {
                *po->u.int_arg = bool_val;
            } else if (po->flags & OPT_INT) {
                *po->u.int_arg = parse_number_or_die(opt, arg, OPT_INT64, INT_MIN, INT_MAX);
            } else if (po->flags & OPT_INT64) {
                *po->u.int64_arg = parse_number_or_die(opt, arg, OPT_INT64, INT64_MIN, INT64_MAX);
            } else if (po->flags & OPT_FLOAT) {
                *po->u.float_arg = parse_number_or_die(opt, arg, OPT_FLOAT, -INFINITY, INFINITY);
            } else if (po->u.func_arg) {
                if (po->u.func_arg(opt, arg) < 0) {
                    fprintf(stderr, "%s: failed to set value '%s' for option '%s'\n", argv[0], arg, opt);
                    exit(1);
                }
            }
            if(po->flags & OPT_EXIT)
                exit(0);
        } else {
            if (parse_arg_function) {
                if (parse_arg_function(NULL, opt) < 0)
                    exit(1);
            }
        }
    }
}

#define FLAGS (o->type == FF_OPT_TYPE_FLAGS) ? AV_DICT_APPEND : 0
#define SET_PREFIXED_OPTS(ch, flag, output) \
    if (opt[0] == ch && avcodec_opts[0] && (o = av_opt_find(avcodec_opts[0], opt+1, NULL, flag, 0)))\
        av_dict_set(&output, opt+1, arg, FLAGS);
static int opt_default2(const char *opt, const char *arg)
{
    const AVOption *o;
    if ((o = av_opt_find(avcodec_opts[0], opt, NULL, 0, AV_OPT_SEARCH_CHILDREN))) {
        if (o->flags & AV_OPT_FLAG_VIDEO_PARAM)
            av_dict_set(&video_opts, opt, arg, FLAGS);
        if (o->flags & AV_OPT_FLAG_AUDIO_PARAM)
            av_dict_set(&audio_opts, opt, arg, FLAGS);
        if (o->flags & AV_OPT_FLAG_SUBTITLE_PARAM)
            av_dict_set(&sub_opts, opt, arg, FLAGS);
    } else if ((o = av_opt_find(avformat_opts, opt, NULL, 0, AV_OPT_SEARCH_CHILDREN)))
        av_dict_set(&format_opts, opt, arg, FLAGS);
    else if ((o = av_opt_find(sws_opts, opt, NULL, 0, AV_OPT_SEARCH_CHILDREN))) {
        // XXX we only support sws_flags, not arbitrary sws options
        int ret = av_set_string3(sws_opts, opt, arg, 1, NULL);
        if (ret < 0) {
            av_log(NULL, AV_LOG_ERROR, "Error setting option %s.\n", opt);
            return ret;
        }
    }

    if (!o) {
        SET_PREFIXED_OPTS('v', AV_OPT_FLAG_VIDEO_PARAM,    video_opts)
        SET_PREFIXED_OPTS('a', AV_OPT_FLAG_AUDIO_PARAM,    audio_opts)
        SET_PREFIXED_OPTS('s', AV_OPT_FLAG_SUBTITLE_PARAM, sub_opts)
    }

    if (o)
        return 0;
    fprintf(stderr, "Unrecognized option '%s'\n", opt);
    return AVERROR_OPTION_NOT_FOUND;
}

int opt_default(const char *opt, const char *arg){
    int type;
    int ret= 0;
    const AVOption *o= NULL;
    int opt_types[]={AV_OPT_FLAG_VIDEO_PARAM, AV_OPT_FLAG_AUDIO_PARAM, 0, AV_OPT_FLAG_SUBTITLE_PARAM, 0};
    AVCodec *p = NULL;
    AVOutputFormat *oformat = NULL;
    AVInputFormat *iformat = NULL;

    while ((p = av_codec_next(p))) {
        const AVClass *c = p->priv_class;
        if (c && av_find_opt(&c, opt, NULL, 0, 0))
            break;
    }
    if (p)
        goto out;
    while ((oformat = av_oformat_next(oformat))) {
        const AVClass *c = oformat->priv_class;
        if (c && av_find_opt(&c, opt, NULL, 0, 0))
            break;
    }
    if (oformat)
        goto out;
    while ((iformat = av_iformat_next(iformat))) {
        const AVClass *c = iformat->priv_class;
        if (c && av_find_opt(&c, opt, NULL, 0, 0))
            break;
    }
    if (iformat)
        goto out;

    for(type=0; *avcodec_opts && type<AVMEDIA_TYPE_NB && ret>= 0; type++){
        const AVOption *o2 = av_opt_find(avcodec_opts[0], opt, NULL, opt_types[type], 0);
        if(o2)
            ret = av_set_string3(avcodec_opts[type], opt, arg, 1, &o);
    }
    if(!o && avformat_opts)
        ret = av_set_string3(avformat_opts, opt, arg, 1, &o);
    if(!o && sws_opts)
        ret = av_set_string3(sws_opts, opt, arg, 1, &o);
    if(!o){
        if (opt[0] == 'a' && avcodec_opts[AVMEDIA_TYPE_AUDIO])
            ret = av_set_string3(avcodec_opts[AVMEDIA_TYPE_AUDIO], opt+1, arg, 1, &o);
        else if(opt[0] == 'v' && avcodec_opts[AVMEDIA_TYPE_VIDEO])
            ret = av_set_string3(avcodec_opts[AVMEDIA_TYPE_VIDEO], opt+1, arg, 1, &o);
        else if(opt[0] == 's' && avcodec_opts[AVMEDIA_TYPE_SUBTITLE])
            ret = av_set_string3(avcodec_opts[AVMEDIA_TYPE_SUBTITLE], opt+1, arg, 1, &o);
        if (ret >= 0)
            opt += 1;
    }
    if (o && ret < 0) {
        fprintf(stderr, "Invalid value '%s' for option '%s'\n", arg, opt);
        exit(1);
    }
    if (!o) {
        fprintf(stderr, "Unrecognized option '%s'\n", opt);
        exit(1);
    }

 out:
    if ((ret = opt_default2(opt, arg)) < 0)
        return ret;

//    av_log(NULL, AV_LOG_ERROR, "%s:%s: %f 0x%0X\n", opt, arg, av_get_double(avcodec_opts, opt, NULL), (int)av_get_int(avcodec_opts, opt, NULL));

    opt_values= av_realloc(opt_values, sizeof(void*)*(opt_name_count+1));
    opt_values[opt_name_count] = av_strdup(arg);
    opt_names= av_realloc(opt_names, sizeof(void*)*(opt_name_count+1));
    opt_names[opt_name_count++] = av_strdup(opt);

    if ((*avcodec_opts && avcodec_opts[0]->debug) || (avformat_opts && avformat_opts->debug))
        av_log_set_level(AV_LOG_DEBUG);
    return 0;
}

int opt_loglevel(const char *opt, const char *arg)
{
    const struct { const char *name; int level; } log_levels[] = {
        { "quiet"  , AV_LOG_QUIET   },
        { "panic"  , AV_LOG_PANIC   },
        { "fatal"  , AV_LOG_FATAL   },
        { "error"  , AV_LOG_ERROR   },
        { "warning", AV_LOG_WARNING },
        { "info"   , AV_LOG_INFO    },
        { "verbose", AV_LOG_VERBOSE },
        { "debug"  , AV_LOG_DEBUG   },
    };
    char *tail;
    int level;
    int i;

    for (i = 0; i < FF_ARRAY_ELEMS(log_levels); i++) {
        if (!strcmp(log_levels[i].name, arg)) {
            av_log_set_level(log_levels[i].level);
            return 0;
        }
    }

    level = strtol(arg, &tail, 10);
    if (*tail) {
        fprintf(stderr, "Invalid loglevel \"%s\". "
                        "Possible levels are numbers or:\n", arg);
        for (i = 0; i < FF_ARRAY_ELEMS(log_levels); i++)
            fprintf(stderr, "\"%s\"\n", log_levels[i].name);
        exit(1);
    }
    av_log_set_level(level);
    return 0;
}

int opt_timelimit(const char *opt, const char *arg)
{
#if HAVE_SETRLIMIT
    int lim = parse_number_or_die(opt, arg, OPT_INT64, 0, INT_MAX);
    struct rlimit rl = { lim, lim + 1 };
    if (setrlimit(RLIMIT_CPU, &rl))
        perror("setrlimit");
#else
    fprintf(stderr, "Warning: -%s not implemented on this OS\n", opt);
#endif
    return 0;
}

static void *alloc_priv_context(int size, const AVClass *class)
{
    void *p = av_mallocz(size);
    if (p) {
        *(const AVClass **)p = class;
        av_opt_set_defaults(p);
    }
    return p;
}

void set_context_opts(void *ctx, void *opts_ctx, int flags, AVCodec *codec)
{
    int i;
    void *priv_ctx=NULL;
    if(!strcmp("AVCodecContext", (*(AVClass**)ctx)->class_name)){
        AVCodecContext *avctx= ctx;
        if(codec && codec->priv_class){
            if(!avctx->priv_data && codec->priv_data_size)
                avctx->priv_data= alloc_priv_context(codec->priv_data_size, codec->priv_class);
            priv_ctx= avctx->priv_data;
        }
    } else if (!strcmp("AVFormatContext", (*(AVClass**)ctx)->class_name)) {
        AVFormatContext *avctx = ctx;
        if (avctx->oformat && avctx->oformat->priv_class) {
            priv_ctx = avctx->priv_data;
        } else if (avctx->iformat && avctx->iformat->priv_class) {
            priv_ctx = avctx->priv_data;
        }
    }

    for(i=0; i<opt_name_count; i++){
        char buf[256];
        const AVOption *opt;
        const char *str;
        if (priv_ctx) {
            if (av_find_opt(priv_ctx, opt_names[i], NULL, flags, flags)) {
                if (av_set_string3(priv_ctx, opt_names[i], opt_values[i], 1, NULL) < 0) {
                    fprintf(stderr, "Invalid value '%s' for option '%s'\n",
                            opt_names[i], opt_values[i]);
                    exit(1);
                }
            } else
                goto global;
        } else {
        global:
            str = av_get_string(opts_ctx, opt_names[i], &opt, buf, sizeof(buf));
            /* if an option with name opt_names[i] is present in opts_ctx then str is non-NULL */
            if (str && ((opt->flags & flags) == flags))
                av_set_string3(ctx, opt_names[i], str, 1, NULL);
        }
    }
}

void print_error(const char *filename, int err)
{
    char errbuf[128];
    const char *errbuf_ptr = errbuf;

    if (av_strerror(err, errbuf, sizeof(errbuf)) < 0)
        errbuf_ptr = strerror(AVUNERROR(err));
    fprintf(stderr, "%s: %s\n", filename, errbuf_ptr);
}

//static int warned_cfg = 0;
//
//#define INDENT        1
//#define SHOW_VERSION  2
//#define SHOW_CONFIG   4
//
//#define PRINT_LIB_INFO(outstream,libname,LIBNAME,flags)                 \
//    if (CONFIG_##LIBNAME) {                                             \
//        const char *indent = flags & INDENT? "  " : "";                 \
//        if (flags & SHOW_VERSION) {                                     \
//            unsigned int version = libname##_version();                 \
//            fprintf(outstream, "%slib%-9s %2d.%3d.%2d / %2d.%3d.%2d\n", \
//                    indent, #libname,                                   \
//                    LIB##LIBNAME##_VERSION_MAJOR,                       \
//                    LIB##LIBNAME##_VERSION_MINOR,                       \
//                    LIB##LIBNAME##_VERSION_MICRO,                       \
//                    version >> 16, version >> 8 & 0xff, version & 0xff); \
//        }                                                               \
//        if (flags & SHOW_CONFIG) {                                      \
//            const char *cfg = libname##_configuration();                \
//            if (strcmp(FFMPEG_CONFIGURATION, cfg)) {                    \
//                if (!warned_cfg) {                                      \
//                    fprintf(outstream,                                  \
//                            "%sWARNING: library configuration mismatch\n", \
//                            indent);                                    \
//                    warned_cfg = 1;                                     \
//                }                                                       \
//                fprintf(stderr, "%s%-11s configuration: %s\n",          \
//                        indent, #libname, cfg);                         \
//            }                                                           \
//        }                                                               \
//    }                                                                   \
//
//static void print_all_libs_info(FILE* outstream, int flags)
//{
//    PRINT_LIB_INFO(outstream, avutil,   AVUTIL,   flags);
//    PRINT_LIB_INFO(outstream, avcodec,  AVCODEC,  flags);
//    PRINT_LIB_INFO(outstream, avformat, AVFORMAT, flags);
//    PRINT_LIB_INFO(outstream, avdevice, AVDEVICE, flags);
//    PRINT_LIB_INFO(outstream, avfilter, AVFILTER, flags);
//    PRINT_LIB_INFO(outstream, swscale,  SWSCALE,  flags);
//    PRINT_LIB_INFO(outstream, postproc, POSTPROC, flags);
//}

//void show_banner(void)
//{
//    fprintf(stderr, "%s version " FFMPEG_VERSION ", Copyright (c) %d-%d the FFmpeg developers\n",
//            program_name, program_birth_year, this_year);
//    fprintf(stderr, "  built on %s %s with %s %s\n",
//            __DATE__, __TIME__, CC_TYPE, CC_VERSION);
//    fprintf(stderr, "  configuration: " FFMPEG_CONFIGURATION "\n");
//    print_all_libs_info(stderr, INDENT|SHOW_CONFIG);
//    print_all_libs_info(stderr, INDENT|SHOW_VERSION);
//}

//int opt_version(const char *opt, const char *arg) {
//    printf("%s " FFMPEG_VERSION "\n", program_name);
//    print_all_libs_info(stdout, SHOW_VERSION);
//    return 0;
//}

//int opt_license(const char *opt, const char *arg)
//{
//    printf(
//#if CONFIG_NONFREE
//    "This version of %s has nonfree parts compiled in.\n"
//    "Therefore it is not legally redistributable.\n",
//    program_name
//#elif CONFIG_GPLV3
//    "%s is free software; you can redistribute it and/or modify\n"
//    "it under the terms of the GNU General Public License as published by\n"
//    "the Free Software Foundation; either version 3 of the License, or\n"
//    "(at your option) any later version.\n"
//    "\n"
//    "%s is distributed in the hope that it will be useful,\n"
//    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
//    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
//    "GNU General Public License for more details.\n"
//    "\n"
//    "You should have received a copy of the GNU General Public License\n"
//    "along with %s.  If not, see <http://www.gnu.org/licenses/>.\n",
//    program_name, program_name, program_name
//#elif CONFIG_GPL
//    "%s is free software; you can redistribute it and/or modify\n"
//    "it under the terms of the GNU General Public License as published by\n"
//    "the Free Software Foundation; either version 2 of the License, or\n"
//    "(at your option) any later version.\n"
//    "\n"
//    "%s is distributed in the hope that it will be useful,\n"
//    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
//    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
//    "GNU General Public License for more details.\n"
//    "\n"
//    "You should have received a copy of the GNU General Public License\n"
//    "along with %s; if not, write to the Free Software\n"
//    "Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA\n",
//    program_name, program_name, program_name
//#elif CONFIG_LGPLV3
//    "%s is free software; you can redistribute it and/or modify\n"
//    "it under the terms of the GNU Lesser General Public License as published by\n"
//    "the Free Software Foundation; either version 3 of the License, or\n"
//    "(at your option) any later version.\n"
//    "\n"
//    "%s is distributed in the hope that it will be useful,\n"
//    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
//    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
//    "GNU Lesser General Public License for more details.\n"
//    "\n"
//    "You should have received a copy of the GNU Lesser General Public License\n"
//    "along with %s.  If not, see <http://www.gnu.org/licenses/>.\n",
//    program_name, program_name, program_name
//#else
//    "%s is free software; you can redistribute it and/or\n"
//    "modify it under the terms of the GNU Lesser General Public\n"
//    "License as published by the Free Software Foundation; either\n"
//    "version 2.1 of the License, or (at your option) any later version.\n"
//    "\n"
//    "%s is distributed in the hope that it will be useful,\n"
//    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
//    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n"
//    "Lesser General Public License for more details.\n"
//    "\n"
//    "You should have received a copy of the GNU Lesser General Public\n"
//    "License along with %s; if not, write to the Free Software\n"
//    "Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA\n",
//    program_name, program_name, program_name
//#endif
//    );
//    return 0;
//}

int opt_formats(const char *opt, const char *arg)
{
    AVInputFormat *ifmt=NULL;
    AVOutputFormat *ofmt=NULL;
    const char *last_name;

    printf(
        "File formats:\n"
        " D. = Demuxing supported\n"
        " .E = Muxing supported\n"
        " --\n");
    last_name= "000";
    for(;;){
        int decode=0;
        int encode=0;
        const char *name=NULL;
        const char *long_name=NULL;

        while((ofmt= av_oformat_next(ofmt))) {
            if((name == NULL || strcmp(ofmt->name, name)<0) &&
                strcmp(ofmt->name, last_name)>0){
                name= ofmt->name;
                long_name= ofmt->long_name;
                encode=1;
            }
        }
        while((ifmt= av_iformat_next(ifmt))) {
            if((name == NULL || strcmp(ifmt->name, name)<0) &&
                strcmp(ifmt->name, last_name)>0){
                name= ifmt->name;
                long_name= ifmt->long_name;
                encode=0;
            }
            if(name && strcmp(ifmt->name, name)==0)
                decode=1;
        }
        if(name==NULL)
            break;
        last_name= name;

        printf(
            " %s%s %-15s %s\n",
            decode ? "D":" ",
            encode ? "E":" ",
            name,
            long_name ? long_name:" ");
    }
    return 0;
}

int opt_codecs(const char *opt, const char *arg)
{
    AVCodec *p=NULL, *p2;
    const char *last_name;
    printf(
        "Codecs:\n"
        " D..... = Decoding supported\n"
        " .E.... = Encoding supported\n"
        " ..V... = Video codec\n"
        " ..A... = Audio codec\n"
        " ..S... = Subtitle codec\n"
        " ...S.. = Supports draw_horiz_band\n"
        " ....D. = Supports direct rendering method 1\n"
        " .....T = Supports weird frame truncation\n"
        " ------\n");
    last_name= "000";
    for(;;){
        int decode=0;
        int encode=0;
        int cap=0;
        const char *type_str;

        p2=NULL;
        while((p= av_codec_next(p))) {
            if((p2==NULL || strcmp(p->name, p2->name)<0) &&
                strcmp(p->name, last_name)>0){
                p2= p;
                decode= encode= cap=0;
            }
            if(p2 && strcmp(p->name, p2->name)==0){
                if(p->decode) decode=1;
                if(p->encode) encode=1;
                cap |= p->capabilities;
            }
        }
        if(p2==NULL)
            break;
        last_name= p2->name;

        switch(p2->type) {
        case AVMEDIA_TYPE_VIDEO:
            type_str = "V";
            break;
        case AVMEDIA_TYPE_AUDIO:
            type_str = "A";
            break;
        case AVMEDIA_TYPE_SUBTITLE:
            type_str = "S";
            break;
        default:
            type_str = "?";
            break;
        }
        printf(
            " %s%s%s%s%s%s %-15s %s",
            decode ? "D": (/*p2->decoder ? "d":*/" "),
            encode ? "E":" ",
            type_str,
            cap & CODEC_CAP_DRAW_HORIZ_BAND ? "S":" ",
            cap & CODEC_CAP_DR1 ? "D":" ",
            cap & CODEC_CAP_TRUNCATED ? "T":" ",
            p2->name,
            p2->long_name ? p2->long_name : "");
       /* if(p2->decoder && decode==0)
            printf(" use %s for decoding", p2->decoder->name);*/
        printf("\n");
    }
    printf("\n");
    printf(
"Note, the names of encoders and decoders do not always match, so there are\n"
"several cases where the above table shows encoder only or decoder only entries\n"
"even though both encoding and decoding are supported. For example, the h263\n"
"decoder corresponds to the h263 and h263p encoders, for file formats it is even\n"
"worse.\n");
    return 0;
}

int opt_bsfs(const char *opt, const char *arg)
{
    AVBitStreamFilter *bsf=NULL;

    printf("Bitstream filters:\n");
    while((bsf = av_bitstream_filter_next(bsf)))
        printf("%s\n", bsf->name);
    printf("\n");
    return 0;
}

int opt_protocols(const char *opt, const char *arg)
{
    URLProtocol *up=NULL;

    printf("Supported file protocols:\n"
           "I.. = Input  supported\n"
           ".O. = Output supported\n"
           "..S = Seek   supported\n"
           "FLAGS NAME\n"
           "----- \n");
    while((up = av_protocol_next(up)))
        printf("%c%c%c   %s\n",
               up->url_read  ? 'I' : '.',
               up->url_write ? 'O' : '.',
               up->url_seek  ? 'S' : '.',
               up->name);
    return 0;
}

int opt_filters(const char *opt, const char *arg)
{
    AVFilter av_unused(**filter) = NULL;

    printf("Filters:\n");
#if CONFIG_AVFILTER
    while ((filter = av_filter_next(filter)) && *filter)
        printf("%-16s %s\n", (*filter)->name, (*filter)->description);
#endif
    return 0;
}

int opt_pix_fmts(const char *opt, const char *arg)
{
    enum PixelFormat pix_fmt;

    printf(
        "Pixel formats:\n"
        "I.... = Supported Input  format for conversion\n"
        ".O... = Supported Output format for conversion\n"
        "..H.. = Hardware accelerated format\n"
        "...P. = Paletted format\n"
        "....B = Bitstream format\n"
        "FLAGS NAME            NB_COMPONENTS BITS_PER_PIXEL\n"
        "-----\n");

#if !CONFIG_SWSCALE
#   define sws_isSupportedInput(x)  0
#   define sws_isSupportedOutput(x) 0
#endif

    for (pix_fmt = 0; pix_fmt < PIX_FMT_NB; pix_fmt++) {
        const AVPixFmtDescriptor *pix_desc = &av_pix_fmt_descriptors[pix_fmt];
        printf("%c%c%c%c%c %-16s       %d            %2d\n",
               sws_isSupportedInput (pix_fmt)      ? 'I' : '.',
               sws_isSupportedOutput(pix_fmt)      ? 'O' : '.',
               pix_desc->flags & PIX_FMT_HWACCEL   ? 'H' : '.',
               pix_desc->flags & PIX_FMT_PAL       ? 'P' : '.',
               pix_desc->flags & PIX_FMT_BITSTREAM ? 'B' : '.',
               pix_desc->name,
               pix_desc->nb_components,
               av_get_bits_per_pixel(pix_desc));
    }
    return 0;
}

int read_yesno(void)
{
    int c = getchar();
    int yesno = (toupper(c) == 'Y');

    while (c != '\n' && c != EOF)
        c = getchar();

    return yesno;
}

int read_file(const char *filename, char **bufptr, size_t *size)
{
    FILE *f = fopen(filename, "rb");

    if (!f) {
        fprintf(stderr, "Cannot read file '%s': %s\n", filename, strerror(errno));
        return AVERROR(errno);
    }
    fseek(f, 0, SEEK_END);
    *size = ftell(f);
    fseek(f, 0, SEEK_SET);
    *bufptr = av_malloc(*size + 1);
    if (!*bufptr) {
        fprintf(stderr, "Could not allocate file buffer\n");
        fclose(f);
        return AVERROR(ENOMEM);
    }
    fread(*bufptr, 1, *size, f);
    (*bufptr)[*size++] = '\0';

    fclose(f);
    return 0;
}

//FILE *get_preset_file(char *filename, size_t filename_size,
//                      const char *preset_name, int is_path, const char *codec_name)
//{
//    FILE *f = NULL;
//    int i;
//    const char *base[3]= { getenv("FFMPEG_DATADIR"),
//                           getenv("HOME"),
//                           FFMPEG_DATADIR,
//                         };
//
//    if (is_path) {
//        av_strlcpy(filename, preset_name, filename_size);
//        f = fopen(filename, "r");
//    } else {
//#ifdef _WIN32
//        char datadir[MAX_PATH], *ls;
//        base[2] = NULL;
//
//        if (GetModuleFileNameA(GetModuleHandleA(NULL), datadir, sizeof(datadir) - 1))
//        {
//            for (ls = datadir; ls < datadir + strlen(datadir); ls++)
//                if (*ls == '\\') *ls = '/';
//
//            if (ls = strrchr(datadir, '/'))
//            {
//                *ls = 0;
//                strncat(datadir, "/ffpresets",  sizeof(datadir) - 1 - strlen(datadir));
//                base[2] = datadir;
//            }
//        }
//#endif
//        for (i = 0; i < 3 && !f; i++) {
//            if (!base[i])
//                continue;
//            snprintf(filename, filename_size, "%s%s/%s.ffpreset", base[i], i != 1 ? "" : "/.ffmpeg", preset_name);
//            f = fopen(filename, "r");
//            if (!f && codec_name) {
//                snprintf(filename, filename_size,
//                         "%s%s/%s-%s.ffpreset", base[i],  i != 1 ? "" : "/.ffmpeg", codec_name, preset_name);
//                f = fopen(filename, "r");
//            }
//        }
//    }
//
//    return f;
//}
