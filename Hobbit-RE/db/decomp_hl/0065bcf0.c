
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065bcf0(int *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined8 uVar7;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  *param_2 = (int)&DAT_007f1010;
  pcVar2 = GetCommandLineA();
  if (*pcVar2 != '\0') {
LAB_0065bd15:
    cVar1 = *pcVar2;
    while (cVar1 == ' ') {
      *pcVar2 = '\0';
      pcVar3 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
    }
    if (*pcVar2 != '\0') {
      if (*pcVar2 == '\"') {
        *pcVar2 = '\0';
        pcVar3 = pcVar2 + 1;
        if (pcVar2[1] != '\0') {
          *(char **)(*param_2 + iVar5 * 4) = pcVar3;
          iVar5 = iVar5 + 1;
          do {
            pcVar2 = pcVar3 + 1;
            pcVar3 = pcVar3 + 1;
            local_4 = iVar5;
            if (*pcVar2 == '\"') break;
          } while (*pcVar2 != '\0');
        }
        pcVar2 = pcVar3;
        if (*pcVar3 == '\"') {
          *pcVar3 = '\0';
          pcVar2 = pcVar3 + 1;
          if (pcVar3[1] != '\0') {
            *pcVar2 = '\0';
            pcVar2 = pcVar3 + 2;
          }
        }
      }
      else {
        *(char **)(*param_2 + iVar5 * 4) = pcVar2;
        iVar5 = iVar5 + 1;
        cVar1 = *pcVar2;
        while (local_4 = iVar5, cVar1 != ' ') {
          if (cVar1 == '\0') goto LAB_0065bd15;
          pcVar3 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
          cVar1 = *pcVar3;
        }
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          pcVar2 = pcVar2 + 1;
        }
      }
      goto LAB_0065bd15;
    }
    *param_1 = iVar5;
    DAT_007edad8 = GetModuleHandleA((LPCSTR)0x0);
    iVar5 = 0;
    DAT_007edb00 = 1.0;
    DAT_007f0144 = 0;
    DAT_007f0464 = 1;
    DAT_007f0448 = 0;
    DAT_007f044c = 0;
    DAT_007edb18 = 0;
    DAT_007edb08 = 0;
    if (0 < local_4) {
      do {
        iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__adapter_0074e2a0);
        if (iVar4 == 0) {
          DAT_007edafc = FUN_006c24bb(*(undefined4 *)(*param_2 + 4 + iVar5 * 4));
          iVar5 = iVar5 + 1;
        }
        else {
          iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__fullscreen_0074e2ac);
          if (iVar4 == 0) {
            DAT_007f0464 = 0;
          }
          else {
            iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__windowed_0074e2b8);
            if (iVar4 == 0) {
              DAT_007f0464 = 1;
            }
            else {
              iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__validate_0074e2c4);
              if (iVar4 == 0) {
                _DAT_007f0ffc = 1;
              }
              else {
                iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),&DAT_0074e2d0);
                if (iVar4 == 0) {
                  DAT_007f0464 = 0;
                  DAT_007f0144 = 0x20;
                }
                else {
                  iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),&DAT_0074e2d4);
                  if (iVar4 == 0) {
                    DAT_007f0464 = 0;
                    DAT_007f0144 = 0x10;
                  }
                  else {
                    iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__safe_0074e2d8);
                    if (iVar4 == 0) {
                      DAT_007edb1c = 1;
                    }
                    else {
                      iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__size_0074e2e0);
                      if (iVar4 == 0) {
                        if (iVar5 < local_4 + -2) {
                          DAT_007f0448 = FUN_006c24bb(*(undefined4 *)(*param_2 + 4 + iVar5 * 4));
                          DAT_007f044c = FUN_006c24bb(*(undefined4 *)(*param_2 + 8 + iVar5 * 4));
                          iVar5 = iVar5 + 2;
                        }
                      }
                      else {
                        iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),s__gamma_0074e2e8
                                            );
                        if (iVar4 == 0) {
                          if (iVar5 < local_4 + -1) {
                            fVar6 = (float10)FUN_006c23d9(*(undefined4 *)(*param_2 + 4 + iVar5 * 4))
                            ;
                            DAT_007edb00 = (float)fVar6;
                            if (fVar6 < (float10)_DAT_006e936c ==
                                (NAN(fVar6) || NAN((float10)_DAT_006e936c))) {
                              if (_DAT_006e958c < DAT_007edb00) {
                                DAT_007edb00 = 3.0;
                              }
                              iVar5 = iVar5 + 1;
                            }
                            else {
                              DAT_007edb00 = 0.5;
                              iVar5 = iVar5 + 1;
                            }
                          }
                        }
                        else {
                          iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),
                                               s__info_0074e2f0);
                          if (iVar4 == 0) {
                            DAT_007edb18 = 1;
                          }
                          else {
                            iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),
                                                 s__nv10_0074e2f8);
                            if (iVar4 == 0) {
                              DAT_007edb39 = 1;
                            }
                            else {
                              iVar4 = FUN_00647ed0(*(undefined4 *)(*param_2 + iVar5 * 4),
                                                   s__tex2_0074e300);
                              if (iVar4 == 0) {
                                DAT_007edb38 = 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_4);
    }
  }
  _DAT_007f02f4 = 1;
  DAT_007f0144 = 0x20;
  DAT_007f0464 = 0;
  _DAT_007efff8 = 0;
  _DAT_007efffc = 0;
  _DAT_007f0000 = 0;
  _DAT_007f0004 = 0;
  _DAT_007f0008 = 0;
  _DAT_007f000c = 0;
  _DAT_007f0010 = 0;
  _DAT_007f0014 = 0;
  _DAT_007f0018 = 0;
  _DAT_007f001c = 0;
  _DAT_007f0020 = 0;
  _DAT_007f0024 = 0;
  DAT_007f0028 = 0;
  DAT_007f002c = 0;
  DAT_007f0030 = 0;
  DAT_007f0034 = 0;
  uVar7 = FUN_0064cb70();
  DAT_007f0038 = (int)uVar7;
  DAT_007f003c = (int)((ulonglong)uVar7 >> 0x20);
  return;
}

