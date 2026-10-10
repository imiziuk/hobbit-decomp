
undefined * __thiscall FUN_005496c0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  FUN_00647cf0(param_2);
  FUN_00647cf0(param_1 + 0x60);
  DAT_0076c570 = '\0';
  iVar2 = FUN_00647e80(param_3,s_CSIDL__0073cb24,6);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x468) != 0)) {
    local_108 = 0xffffffff;
    iVar2 = 0;
    do {
      uVar5 = 0xffffffff;
      pcVar6 = (&PTR_s_CSIDL_PERSONAL_0073c8b8)[iVar2 * 2];
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_00647e80(param_3,(&PTR_s_CSIDL_PERSONAL_0073c8b8)[iVar2 * 2],~uVar5 - 1);
      if (iVar3 == 0) {
        local_108 = (&DAT_0073c8bc)[iVar2 * 2];
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    uVar4 = FUN_006605b0(local_108,0,0,local_104);
    iVar3 = (**(code **)(param_1 + 0x468))(uVar4);
    pcVar6 = (&PTR_s_CSIDL_PERSONAL_0073c8b8)[iVar2 * 2];
    uVar5 = 0xffffffff;
    if (iVar3 == 0) {
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_0064f190(&DAT_0076c570,&DAT_0071e9bc,local_104,(~uVar5 - 1) + param_3);
      FUN_006cea06(&DAT_0076c570);
      FUN_00647dc0(&DAT_0076c570,&DAT_00731054);
      FUN_00647dc0(&DAT_0076c570,param_2);
    }
    else {
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      param_3 = param_3 + ~uVar5;
    }
  }
  if (DAT_0076c570 == '\0') {
    if (param_3 == 0) {
      param_1 = param_1 + 0x60;
    }
    else {
      iVar2 = FUN_00647cf0(param_3);
      if (iVar2 != 0) {
        FUN_0064f190(&DAT_0076c570,s__s_s__s_0073cb1c,param_1 + 0x161,param_3,param_2);
        goto LAB_0054982e;
      }
      param_1 = param_1 + 0x161;
    }
    FUN_0064f190(&DAT_0076c570,&DAT_0071e9bc,param_1,param_2);
  }
LAB_0054982e:
  FUN_005484f0(&DAT_0076c570,&DAT_0076c970,0);
  return &DAT_0076c970;
}

