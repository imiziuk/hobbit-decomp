
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00502e60(void)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  float local_34;
  float local_30;
  int local_2c;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((_DAT_00762500 < DAT_006e92e4 == (NAN(_DAT_00762500) || NAN(DAT_006e92e4))) &&
     ((float)DAT_00762508 < _DAT_00762500 == ((float)DAT_00762508 == _DAT_00762500))) {
    iVar5 = __ftol();
    piVar2 = *(int **)(DAT_007624fc + iVar5 * 4);
    if ((char)piVar2[7] == '\0') {
      sVar1 = (short)piVar2[5];
    }
    else {
      sVar1 = *(short *)(*piVar2 + 4);
    }
    fVar3 = (float)(int)sVar1;
    if ((char)piVar2[7] == '\0') {
      sVar1 = *(short *)((int)piVar2 + 0x16);
    }
    else {
      sVar1 = *(short *)(*piVar2 + 6);
    }
    local_30 = (float)(int)sVar1;
    fVar4 = (float)(int)local_30;
    if (fVar3 < fVar4) {
      local_30 = 256.0;
      local_34 = (fVar3 / fVar4) * _DAT_006efbe0;
    }
    else {
      local_34 = 256.0;
      local_30 = (fVar4 / fVar3) * _DAT_006efbe0;
    }
    iVar5 = FUN_0065f190(s_VramViewer_00731cf0);
    if (iVar5 != 0) {
      FUN_0066c3a0(7,7);
      FUN_0066dac0();
      iVar5 = __ftol(0);
      FUN_0066db80(*(undefined4 *)(DAT_007624fc + iVar5 * 4));
      uVar11 = 0xffffffff;
      uVar6 = FUN_0041b9c0(local_34,local_30);
      uVar7 = FUN_00401f00(0x42480000,0x42480000,0);
      FUN_0066e5a0(uVar7,uVar6,uVar11);
      FUN_0066d9a0();
      uVar6 = DAT_00731c44;
      if ((char)piVar2[7] == '\0') {
        sVar1 = (short)piVar2[5];
      }
      else {
        sVar1 = *(short *)(*piVar2 + 4);
      }
      FUN_0064f0d0(DAT_00731c44,1,s_Width____d_00731ce0,(int)sVar1);
      if ((char)piVar2[7] == '\0') {
        sVar1 = *(short *)((int)piVar2 + 0x16);
      }
      else {
        sVar1 = *(short *)(*piVar2 + 6);
      }
      FUN_0064f0d0(uVar6,2,s_Height____d_00731cd0,(int)sVar1);
      FUN_0064f0d0(uVar6,3,s___Mips____d_00731cc0,(int)(char)piVar2[7]);
      FUN_0064f0d0(uVar6,4,s_Data_Size___d_00731cb0,piVar2[2]);
      iVar5 = FUN_00650fb0();
      puVar8 = &DAT_0071ff7c;
      if (iVar5 == 0) {
        puVar8 = &DAT_0071ff78;
      }
      FUN_0064f0d0(uVar6,5,s_Has_Alpha___s_00731ca0,puVar8);
      FUN_0064f0d0(uVar6,6,s_VRAM_ID____d_00731c90,piVar2[4]);
      iVar5 = -4;
      do {
        iVar9 = __ftol();
        iVar9 = iVar9 + iVar5;
        if ((-1 < iVar9) && (iVar9 < DAT_00762508)) {
          local_2c = iVar5 * 0x46;
          local_14 = 0;
          local_1c = (float)local_2c + _DAT_00731c3c;
          local_18 = _DAT_00731c40;
          if (iVar5 == 0) {
            iVar10 = __ftol();
            local_10 = iVar10 + -2;
            local_4 = __ftol();
            local_c = local_4 + -2;
            local_4 = local_4 + 0x42;
            local_8 = iVar10 + 0x42;
            local_39 = 0xff;
            local_3a = 100;
            local_3b = 0;
            local_3c = 0;
            local_35 = 0xff;
            local_36 = 100;
            local_37 = 0;
            local_38 = 0;
            local_34 = -NAN;
            local_30 = -NAN;
            FUN_0066b4f0(&local_10,&local_30,&local_34,&local_38,&local_3c,0);
          }
          FUN_0066c3a0(7,7);
          FUN_0066dac0();
          FUN_0066db80(*(undefined4 *)(DAT_007624fc + iVar9 * 4),0);
          uVar7 = 0xffffffff;
          uVar6 = FUN_0041b9c0(0x42800000,0x42800000);
          FUN_0066e5a0(&local_1c,uVar6,uVar7);
          FUN_0066d9a0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      uVar6 = __ftol(DAT_00762508 + -1);
      FUN_0064f0d0(1,1,s_Viewing__d_of__d_00731c7c,uVar6);
      FUN_0065f430();
      FUN_0065f480();
      return;
    }
  }
  return;
}

