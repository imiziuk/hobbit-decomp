
void __thiscall FUN_0040c130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  if (((*(uint *)(param_1 + 0x1630) & 0xc0000) == 0) ||
     (iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564)),
     iVar1 == 0)) goto LAB_0040c20d;
  uVar3 = *(uint *)(param_1 + 0x1630) >> 0x12 & 3;
  if (uVar3 == 2) {
    *(byte *)(iVar1 + 0x15b) = *(byte *)(iVar1 + 0x15b) & 0xbf;
    FUN_00553f20(s_Lvl_riv_rope02_0071e498,0);
    uVar7 = 0;
LAB_0040c1d8:
    FUN_00553f20(s_Lvl_riv_rope_0071e488,uVar7);
  }
  else if (uVar3 == 3) {
    if ((*(ushort *)(iVar1 + 0x15a) & 0x4000) == 0) {
      *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
      FUN_00553f20(s_Lvl_riv_rope02_0071e498,1);
      uVar7 = 1;
      goto LAB_0040c1d8;
    }
    *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfff3ffff;
  }
  uVar3 = *(uint *)(param_1 + 0x1630);
  if ((uVar3 & 0xc0000) != 0) {
    *(uint *)(param_1 + 0x1630) = ((uVar3 & 0xfffc0000) - 1 ^ uVar3) & 0xc0000 ^ uVar3;
  }
LAB_0040c20d:
  FUN_0040e700(param_2);
  FUN_0040fba0(param_2);
  FUN_0040fba0(param_2);
  iVar1 = FUN_0040fb90();
  if ((iVar1 != 0) || (iVar1 = FUN_0040fb90(), iVar1 != 0)) {
    FUN_0040cca0();
  }
  FUN_0040aaa0(param_2);
  FUN_0040e1f0(param_2);
  if ((*(uint *)(param_1 + 0x1630) & 0x10) == 0) {
    *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 4;
    iVar1 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x2a0);
    do {
      iVar2 = FUN_004021c0(*puVar6,puVar6[1]);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(param_1 + 0x1630);
        *(uint *)(param_1 + 0x1630) = (uVar3 >> 1 ^ uVar3) & 4 ^ uVar3;
        break;
      }
      iVar2 = FUN_004de640();
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) & 0xfffffffb;
        *(int *)(param_1 + 0x2d0) = iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar1 < 4);
    uVar3 = *(uint *)(param_1 + 0x1630);
    if (((uVar3 >> 1 & 4) != (uVar3 & 4)) &&
       (uVar3 = (uVar3 * 2 ^ uVar3) & 8 ^ uVar3, *(uint *)(param_1 + 0x1630) = uVar3,
       (uVar3 & 4) != 0)) {
      if (*(int *)(param_1 + 0x2d0) < 2) {
        uVar7 = *(undefined4 *)(param_1 + 0x2c0);
        uVar4 = *(undefined4 *)(param_1 + 0x2c4);
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x2c8);
        uVar4 = *(undefined4 *)(param_1 + 0x2cc);
      }
      iVar1 = FUN_004021c0(uVar7,uVar4);
      if (iVar1 != 0) {
        FUN_0046a550();
        *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x10;
      }
    }
  }
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1558),*(undefined4 *)(param_1 + 0x155c));
  if (iVar1 != 0) {
    iVar1 = FUN_004de640();
    *(uint *)(param_1 + 0x1630) =
         (iVar1 << 10 ^ *(uint *)(param_1 + 0x1630)) & 0x400 ^ *(uint *)(param_1 + 0x1630);
  }
  uVar3 = *(uint *)(param_1 + 0x1630);
  if ((uVar3 >> 1 & 0x400) != (uVar3 & 0x400)) {
    uVar3 = (uVar3 * 2 ^ uVar3) & 0x800 ^ uVar3;
    *(uint *)(param_1 + 0x1630) = uVar3;
    if ((uVar3 & 0x400) == 0) {
      iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564));
      if (iVar1 != 0) {
        FUN_004c7660(0);
        FUN_004c77d0(1);
        if (*(char *)(param_1 + 0x1630) < '\0') {
          *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
        }
        else {
          *(byte *)(iVar1 + 0x15b) = *(byte *)(iVar1 + 0x15b) & 0xbf;
        }
      }
      FUN_0040c5e0(0);
    }
    else {
      iVar1 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564));
      if (iVar1 != 0) {
        FUN_004c7660(1);
        FUN_004c77d0(1);
        if (*(char *)(param_1 + 0x1630) < '\0') {
          *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
          FUN_0040c5e0(1);
          if (((*(uint *)(param_1 + 0x1630) & 0x1000) == 0) &&
             (iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1570),
                                   *(undefined4 *)(param_1 + 0x1574)), iVar1 != 0)) {
            FUN_0046a550();
            *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x1000;
          }
        }
        else {
          *(byte *)(iVar1 + 0x15b) = *(byte *)(iVar1 + 0x15b) & 0xbf;
        }
      }
    }
  }
  FUN_0040d560();
  if ((*(uint *)(param_1 + 0x1630) & 0x200) == 0) {
    param_2 = 0;
    piVar5 = (int *)(param_1 + 0x1634);
    puVar6 = (undefined4 *)(param_1 + 0x1608);
    iVar1 = 2;
    do {
      if (*piVar5 == 0) {
        iVar2 = FUN_004021c0(*puVar6,puVar6[1]);
        if ((iVar2 != 0) && (iVar2 = FUN_004de640(), iVar2 != 0)) {
          *piVar5 = 1;
          goto LAB_0040c53b;
        }
      }
      else {
LAB_0040c53b:
        param_2 = param_2 + 1;
      }
      puVar6 = puVar6 + 2;
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 2;
    if (param_2 == 2) {
      puVar6 = (undefined4 *)(param_1 + 0x1618);
      do {
        iVar2 = FUN_004021c0(*puVar6,puVar6[1]);
        FUN_004c7660(0);
        FUN_004c77d0(0);
        puVar6 = puVar6 + 2;
        iVar1 = iVar1 + -1;
        *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
      } while (iVar1 != 0);
      iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1628),*(undefined4 *)(param_1 + 0x162c));
      if (iVar1 != 0) {
        FUN_0046a550();
      }
      *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x200;
    }
  }
  return;
}

