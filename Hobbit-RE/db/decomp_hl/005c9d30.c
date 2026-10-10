
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c9d30(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc [13];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  cVar2 = __ftol();
  iVar4 = *(int *)(param_1 + 0x28);
  iVar3 = __ftol();
  if (cVar2 != *(char *)(param_1 + 0x14)) {
    iVar6 = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        *(char *)(iVar4 + 0x1f + *(int *)(param_1 + 8)) = cVar2;
        *(char *)(iVar4 + 0x2f + *(int *)(param_1 + 8)) = cVar2;
        *(char *)(iVar4 + 0x3f + *(int *)(param_1 + 8)) = cVar2;
        *(char *)(iVar4 + 0x5f + *(int *)(param_1 + 8)) = cVar2;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x60;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    *(char *)(param_1 + 0x14) = cVar2;
  }
  iVar4 = FUN_0065f190(s_RoastMuttonRain_00746460);
  if (iVar4 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      local_e0 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x10);
        local_cc[0xc] = *(undefined4 *)(local_e0 + 0x20 + iVar6);
        local_94 = *(undefined4 *)(local_e0 + 0x28 + iVar6);
        local_98 = *(undefined4 *)(local_e0 + 0x24 + iVar6);
        local_cc[8] = 0;
        local_cc[4] = 0;
        local_cc[9] = 0;
        local_cc[1] = 0;
        local_cc[6] = 0;
        local_cc[2] = 0;
        local_cc[0xb] = 0;
        local_cc[7] = 0;
        local_cc[3] = 0;
        local_cc[0] = 0x3f800000;
        local_cc[5] = 0x3f800000;
        local_cc[10] = 0x3f800000;
        local_90 = 0x3f800000;
        local_d4 = *(undefined4 *)(local_e0 + iVar6 + 0x1c);
        local_d8 = 0;
        local_d0 = 0;
        local_84 = local_94;
        FUN_00463c20(&local_d8);
        puVar5 = (undefined4 *)FUN_0064e040(local_40,local_cc,local_80);
        if ((local_cc != puVar5) && (puVar1 = puVar5 + 0x10, puVar5 != puVar1)) {
          puVar7 = local_cc + 2;
          iVar6 = (int)puVar5 - (int)local_cc;
          do {
            puVar7[-2] = *puVar5;
            puVar7[-1] = puVar5[1];
            *puVar7 = *(undefined4 *)(iVar6 + (int)puVar7);
            puVar7[1] = puVar5[3];
            puVar5 = puVar5 + 4;
            puVar7 = puVar7 + 4;
          } while (puVar5 != puVar1);
        }
        FUN_0066c3a0(3,0x24);
        (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,1);
        FUN_0066dcb0();
        FUN_0066d9c0(local_cc);
        FUN_0066e150(*(int *)(param_1 + 8) + 0xc,*(int *)(param_1 + 0x28) * 6,0x10);
        FUN_0066e180(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x28) * 6,0x10);
        FUN_0066e550(*(undefined4 *)(param_1 + 0xc),iVar3 * 6);
        FUN_0066d9a0();
        iVar4 = iVar4 + 1;
        local_e0 = local_e0 + 0x2c;
      } while (iVar4 < *(int *)(param_1 + 0x2c));
    }
    FUN_0065f430();
    return;
  }
  return;
}

