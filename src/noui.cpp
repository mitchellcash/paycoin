// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "ui_interface.h"

#include <string>
#include "init.h"

int ThreadSafeMessageBox(const std::string& message, const std::string& caption, int style)
{
    printf("%s: %s\n", caption.c_str(), message.c_str());
    fprintf(stderr, "%s: %s\n", caption.c_str(), message.c_str());
    return 4;
}

bool ThreadSafeAskFee(int64 nFeeRequired, const std::string& strCaption)
{
    return true;
}

void InitMessage(const std::string &message)
{
}

std::string _(const char* psz)
{
    return psz;
}

void QueueShutdown()
{
    // Without UI, Shutdown can simply be started in a new thread
    NewThread(Shutdown, NULL);
}

void NotifyBlocksChanged()
{
}

void NotifyKeyStoreStatusChanged(CBasicKeyStore *wallet)
{
}

void NotifyAddressBookChanged(CWallet *wallet, const std::string &address, const std::string &label, EntryStatus status)
{
}

void NotifyTransactionChanged(CWallet *wallet, const uint256 &hashTx, EntryStatus status)
{
}

void NotifyNumConnectionsChanged(int newNumConnections)
{
}

void NotifyAlertChanged(const uint256 &hash, EntryStatus status)
{
}
