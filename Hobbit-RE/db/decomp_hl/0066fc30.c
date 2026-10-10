
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0066fc30(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar7;
  int unaff_ESI;
  int unaff_EDI;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  uint uVar12;
  int iStack_118;
  int iStack_114;
  int local_110 [4];
  int iStack_100;
  byte abStack_f0 [232];
  int iStack_8;
  
  piVar8 = local_110;
  for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  (**(code **)(*(int *)*param_1 + 100))((int *)*param_1);
  piVar8 = (int *)*param_1;
  uVar11 = 0x110;
  iVar5 = (**(code **)(*piVar8 + 0x24))(piVar8,0x110,&iStack_114);
  if (iVar5 < 0) {
    iVar5 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,piVar8,uVar11,-iVar5,1);
    while( true ) {
      bVar10 = iVar5 < 0;
      if (bVar10) {
        iVar5 = -iVar5;
      }
      uVar12 = (uint)bVar10;
      iVar6 = iVar5;
      if (uVar12 != 0) {
        iVar6 = -iVar5;
      }
      if (iVar6 != -0x7ff8ffe2) break;
      iVar5 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
    }
    goto LAB_006701bb;
  }
  uVar12 = 0;
  iVar9 = 0;
  iVar6 = iStack_8 * 0x4c;
  do {
    FUN_0066f780(&DAT_007f213c + iVar9 + iVar6,abStack_f0[iVar9] >> 7);
    iVar2 = local_110[2];
    iVar3 = iStack_114;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x20);
  iVar9 = *(int *)(&DAT_007f17c4 + iStack_8 * 4);
  if (iVar9 == 3) {
    uVar7 = local_110[2] >> 0x1f;
    uVar4 = 0;
    if ((iStack_114 == 1000) && (uVar4 = (local_110[2] ^ uVar7) - uVar7, (int)uVar4 < 0xb)) {
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
    FUN_0066f780(&DAT_007f215c + iVar6,uVar4);
    if ((iVar3 == 1000) && (iVar2 == 0xfffffc18)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    uVar4 = FUN_0066f780(&DAT_007f215d + iVar6,uVar11);
    if ((iVar3 == -1000) && (uVar4 = (iVar2 ^ uVar7) - uVar7, (int)uVar4 < 0xb)) {
      uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
    }
    else {
      uVar4 = uVar4 & 0xffffff00;
    }
    FUN_0066f780(&DAT_007f215e + iVar6,uVar4);
    if ((iVar3 == 1000) && (iVar2 == 1000)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    FUN_0066f780(&DAT_007f215f + iVar6,uVar11);
  }
  else {
    iVar3 = iVar9 + -4;
    if ((iVar3 == 0) || (iVar3 = iVar9 + -7, iVar3 == 0)) {
      uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),abStack_f0[0xc]) & 0xffffff80;
      FUN_0066f780(&DAT_007f215c + iVar6,
                   CONCAT31((int3)(uVar4 >> 8),'\x01' - ((char)uVar4 != '\x01')));
      uVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),abStack_f0[0xd]) & 0xffffff80;
      FUN_0066f780(&DAT_007f215d + iVar6,
                   CONCAT31((int3)(uVar4 >> 8),'\x01' - ((char)uVar4 != '\x01')));
      uVar4 = CONCAT31((int3)((uint)extraout_ECX >> 8),abStack_f0[0xe]) & 0xffffff80;
      uVar11 = FUN_0066f780(&DAT_007f215e + iVar6,
                            CONCAT31((int3)(uVar4 >> 8),'\x01' - ((char)uVar4 != '\x01')));
      uVar4 = CONCAT31((int3)((uint)uVar11 >> 8),abStack_f0[0xf]) & 0xffffff80;
      FUN_0066f780(&DAT_007f215f + iVar6,
                   CONCAT31((int3)(uVar4 >> 8),'\x01' - ((char)uVar4 != '\x01')));
    }
    else {
      FUN_0066f780(&DAT_007f215c + iVar6,iStack_100 == 0);
      FUN_0066f780(&DAT_007f215d + iVar6,iStack_100 == 9000);
      FUN_0066f780(&DAT_007f215e + iVar6,iStack_100 == 18000);
      FUN_0066f780(&DAT_007f215f + iVar6,iStack_100 == 27000);
    }
  }
  switch(*(undefined4 *)(&DAT_007f17c4 + iStack_8 * 4)) {
  case 0:
  case 4:
  case 6:
    FUN_006701f0(&DAT_007f2164 + iVar6,(float)unaff_EDI * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2168 + iVar6,(float)unaff_ESI * _DAT_006f5518);
    FUN_006701f0(&DAT_007f216c + iVar6,(float)iStack_118 * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2170 + iVar6,(float)iStack_114 * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2174 + iVar6,(float)local_110[0] * _DAT_006e9350);
    fVar1 = (float)local_110[1];
    break;
  case 1:
    FUN_006701f0(&DAT_007f2164 + iVar6,(float)unaff_EDI * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2168 + iVar6,(float)unaff_ESI * _DAT_006f5518);
    FUN_006701f0(&DAT_007f216c + iVar6,(float)local_110[1] * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2170 + iVar6,(float)iStack_114 * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2174 + iVar6,(float)local_110[0] * _DAT_006e9350);
    fVar1 = (float)local_110[2];
    break;
  case 2:
    FUN_006701f0(&DAT_007f2164 + iVar6,(float)unaff_EDI * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2168 + iVar6,(float)unaff_ESI * _DAT_006f5518);
    FUN_006701f0(&DAT_007f216c + iVar6,0);
    FUN_006701f0(&DAT_007f2170 + iVar6,0);
    FUN_006701f0(&DAT_007f2174 + iVar6,0);
    FUN_006701f0(&DAT_007f2178 + iVar6,0);
    goto switchD_0066fe95_default;
  case 3:
    FUN_006701f0(&DAT_007f2164 + iVar6,(float)unaff_EDI * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2168 + iVar6,(float)unaff_ESI * _DAT_006f5518);
    FUN_006701f0(&DAT_007f216c + iVar6,(float)local_110[1] * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2170 + iVar6,(float)iStack_114 * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2174 + iVar6,(float)local_110[0] * _DAT_006e9350);
    fVar1 = (float)iStack_118;
    break;
  case 5:
  case 7:
    FUN_006701f0(&DAT_007f2164 + iVar6,(float)unaff_EDI * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2168 + iVar6,(float)unaff_ESI * _DAT_006f5518);
    FUN_006701f0(&DAT_007f216c + iVar6,(float)local_110[1] * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2170 + iVar6,(float)iStack_114 * _DAT_006e9350);
    FUN_006701f0(&DAT_007f2174 + iVar6,(float)local_110[0] * _DAT_006e9350);
    fVar1 = (float)iStack_118 * _DAT_006e9350;
    goto LAB_00670165;
  default:
    goto switchD_0066fe95_default;
  }
  fVar1 = fVar1 * _DAT_006f5518;
LAB_00670165:
  FUN_006701f0(&DAT_007f2178 + iVar6,fVar1);
switchD_0066fe95_default:
  FUN_006701f0(&DAT_007f217c + iVar6,(float)local_110[2] * _DAT_006e9350);
  FUN_006701f0(&DAT_007f2180 + iVar6,(float)local_110[3] * _DAT_006e9350);
LAB_006701bb:
  return CONCAT44(uVar12,iVar5);
}

